//多线程冲突测试

#include<iostream>

#include<thread>
#include<mutex>
#include<atomic>

#include<windows.h>

#define load 20
using namespace std;
int tt = 0;
int done = 0;
mutex mx;
int func(int x)
{


    for (int k = 1; k <= 10; k++)
    {

        cout << "\n|tid=" << x << ",";
        mx.lock();
        tt++;
        //Sleep(10);
        cout << tt ;


        mx.unlock();

    }
    done++;
    cout << "\nthread " << x << " finished";
    return x;
}
int main()
{

    thread* p[load];
    for (int i = 0; i < load; i++)
    {
        p[i] = new thread(func, i);
        p[i]->detach();

    }

    while (done != load)
    {
        Sleep(10);
    }

    for (int i = 0; i < load; i++)
    {
        delete p[i];

    }
    cout << "\n\t所有线程已结束。运行时间(ms)="<<clock();
    cout << "\nCPU核数=" << thread::hardware_concurrency() << endl;
    return 0;
}
