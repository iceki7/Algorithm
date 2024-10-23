#include<iostream>
#include<cassert>
#include<cmath>
#include<ctime>
#include<string>
#include<fstream>
#include<cstdlib>
// itoa


#include<algorithm>
// sort


#include<list>//双向链表。物理上不相邻。查找不方便，但是插入元素很方便。
#include<vector>//物理上的连续空间，随机访问O(n)
// size()
// sort(vec.begin(),vec.end(),std::greater<int>());		//默认是升序
//push_back(1);末尾插入


//vector<int> v={1,2,3};


#include<queue>
//top pop push,empty()
//没有元素时不要调用top

#include<stack>

#ifndef GNN

#define Pi 3.1415
#define WHAT

#endif



using namespace std;
namespace nm {
	class Animal {
	public:
		virtual void eat() = 0;//实现多态。如果用基类指针指向子类对象，就可以调用不同的方法
	};

	class Dog :public Animal {
	public:
		void eat() {
			cout << "\n dog eat \n";
		}
	};

	class Cat :public Animal {
		int k;
		static int s;
		//不加默认为private
		//public相当于是类暴露给外侧的接口，允许其他人使用
		//（写类的和用类的肯定不是同一个人，不然也没必要区分public和private了）
	public:
		struct character
		{
			int ch;

		};
		class eye {

			int color;
		};
		Cat(){}//如果有其他构造函数，这个函数就得显式写出
		Cat(int k) {
			cout << "---------" << endl;
			cout << k << endl;//不加this默认是指形参
			cout << this->k << endl;
			this->k = k;
		}
		void eat() {//重载的函数必须形参一致才算
			
			std::cout << "\n cat eat \n";
		}
		static void f0(int& x) {//形参传引用
			cout << "\t\n";
		}
		void func(const int x)const {//不修改成员变量，且不修改x
		}
	};
}



template <typename T>//调用的时候某些情况下可以不显式指定
T g(T a, T b) {
	static int x;
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


int zero;
int z = 3.5;
int* p = &zero;
unsigned short us;
nm::Cat k1(666);
nm::Animal* animal =new(nm::Cat);
string str = "str";
// length()
// substr(startpos,length)

int main() {

	switch (2) {
	case 1: cout << "[c1]"; break;
	
	case 2: cout<<"2"; case 3:cout << "[c2]"; break;

	default:cout << "[cd]";
	}

	cout << "zero="<<zero;
	char output[2][3];

	char *p= &str[0];

	memset(output, '?', sizeof(output));

	cout << endl<<"ABC"[2]<<endl;
	
	for (int i = 1; i <= 5; i++) 
		cout <<"i="<< i << endl;//不加扩号作用域限1句
	cout << "[end for]";

	nm::Cat::f0(zero);
	g<int>(l, l);
	k1.func(7);
	animal->eat();//对象指针使用->调用方法
	delete(animal);
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


	std::vector<std::vector<double>> v1(3,std::vector<double> (5,1.f));
	vector<int> vec(size,value);


	v1[2][3] = 1;//二重STL

	
	list<int>L;
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
