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
	class Animal {
	public:
		virtual void eat() = 0;//ʵ�ֶ�̬������û���ָ��ָ��������󣬾Ϳ��Ե��ò�ͬ�ķ���
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
		//����Ĭ��Ϊprivate
		//public�൱�����౩¶�����Ľӿڣ�����������ʹ��
		//��д��ĺ�����Ŀ϶�����ͬһ���ˣ���ȻҲû��Ҫ����public��private�ˣ�
	public:
		struct character
		{
			int ch;

		};
		class eye {

			int color;
		};
		Cat(){}//������������캯������������͵���ʽд��
		Cat(int k) {
			cout << "---------" << endl;
			cout << k << endl;//����thisĬ����ָ�β�
			cout << this->k << endl;
			this->k = k;
		}
		void eat() {//���صĺ��������β�һ�²���
			
			std::cout << "\n cat eat \n";
		}
		static void f0(int& x) {//�βδ�����
			cout << "\t\n";
		}
		void func(const int x)const {//���޸ĳ�Ա�������Ҳ��޸�x
		}
	};
}



template <typename T>//���õ�ʱ��ĳЩ����¿��Բ���ʽָ��
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
const int* c1;//ֵ�̶�
int* const c2=NULL;//��ַ�̶�
const int phi = 3.14;


int zero;
int z = 3.5;
int* p = &zero;
unsigned short us;
nm::Cat k1(666);
nm::Animal* animal =new(nm::Cat);
string str = "str";
int main() {

	switch (2) {
	case 1:cout << "[c1]"; break;
	case 2:cout << "[c2]"; break;
	default:cout << "[cd]";
	}

	cout << "zero="<<zero;
	char output[2][3];
	memset(output, '?', sizeof(output));

	cout << endl<<"ABC"[2]<<endl;
	
	for (int i = 1; i <= 5; i++) 
		cout <<"i="<< i << endl;//����������������1��
	cout << "[end for]";

	nm::Cat::f0(zero);
	g<int>(l, l);
	k1.func(7);
	animal->eat();//����ָ��ʹ��->���÷���
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


	std::vector<std::vector<double>> v1(3,std::vector<double> (5,1.f));//kn
	v1[2][3] = 1;//����STL
	//push_back(1);
	
	list<int>L;
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
