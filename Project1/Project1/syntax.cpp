#include<iostream>
#include<cassert>
#include<cmath>
#include<ctime>
#include<string>
#include<fstream>
#include<cstdlib>

#include<list>//双向链表。物理上不相邻。查找不方便，但是插入元素很方便。
#include<vector>//物理上的连续空间，随机访问效率高
#include<queue>
#include<stack>

#ifndef GNN

#define Pi 3.1415
#define WHAT

#endif



using namespace std;
namespace nm {
	class Animal {};
	class Cat :public Animal {
		int k;
		static int s;
		//不加默认为private
		//public相当于是类暴露给外侧的接口，允许其他人使用
		//（写类的和用类的肯定不是同一个人，不然也没必要区分public和private了）
	public:
		Cat(){}//如果有其他构造函数，这个函数就得显式写出
		Cat(int k) {
			cout << "---------" << endl;
			cout << k << endl;//不加this默认是指形参
			cout << this->k << endl;
			this->k = k;
		}
		static void f0(int& x) {//形参传引用
			cout << "\t\n";
		}
		void func()const {//不修改成员变量
		}
	};
}



template <typename T>//调用的时候某些情况下可以不显式指定
T g(T a, T b) {
	return a + b;
}
char operator +(nm::Cat a, nm::Cat b) {
	return '1';
}

typedef long long ll;
ll l = 0x1f;
double d = 0.35f;
int x[5][7];
const int* c1;//值固定
int* const c2=NULL;//地址固定
const int phi = 3.14;

int a;
int* p = &a;
unsigned short us;
nm::Cat k1(666);
nm::Cat* k2=new(nm::Cat);
string str = "str";
int main() {
	
	for (int i = 1; i <= 5; i++) {
		cout <<"i="<< i << endl;
	}
	nm::Cat::f0(a);
	g<int>(l, l);
	k1.func();
	k2->func();
	delete(k2);
	auto c = 7.2;
	cout <<endl<< sizeof(c)<<" Bytes";
	//try {

	//}
	//catch () {
	//	cerr << "err";
	//	return -1;
	//}
	int e = 1;
	assert(e != 2), "error";
	
	system("pause");

	return 0;
}
void printlist() {

	list<int>L;
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}