#include<iostream>
#include<cassert>
#include<cmath>
#include<ctime>
#include<string>
#include<fstream>
#include<cstdlib>

#include<list>//˫�����������ϲ����ڡ����Ҳ����㣬���ǲ���Ԫ�غܷ��㡣
#include<vector>//�����ϵ������ռ䣬�������Ч�ʸ�
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
		//����Ĭ��Ϊprivate
		//public�൱�����౩¶�����Ľӿڣ�����������ʹ��
		//��д��ĺ�����Ŀ϶�����ͬһ���ˣ���ȻҲû��Ҫ����public��private�ˣ�
	public:
		Cat(){}//������������캯������������͵���ʽд��
		Cat(int k) {
			cout << "---------" << endl;
			cout << k << endl;//����thisĬ����ָ�β�
			cout << this->k << endl;
			this->k = k;
		}
		static void f0(int& x) {//�βδ�����
			cout << "\t\n";
		}
		void func()const {//���޸ĳ�Ա����
		}
	};
}



template <typename T>//���õ�ʱ��ĳЩ����¿��Բ���ʽָ��
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
const int* c1;//ֵ�̶�
int* const c2=NULL;//��ַ�̶�
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