#include<iostream>
#include<cstring>
#include<cmath>
#define load 50005
//���鼯�汾��������Ԫ�ػ���Ϊ�ȼ��࣬���趨����Ԫ
using namespace std;
int key[load];//����Ϊ����
int last[load];//�±�Ϊ����

//������ö�١�
int n;
int rr=0;
int mi=50005,mx=0;
void init();
int fnd(int);
int main()
{
	cin>>n;rr+=n;
	for(int i=1;i<=n;i++)
	{
	cin>>key[i];last[key[i]]=key[i];
	}

	init();


	for(int l=1;l<=n;l++)
		for(int r=1;r<=n;r++)
		{
			if(l>=r)continue;
			int first=-1;
			for(int i=l;i<=r;i++)
			{
				if(i==l)
				first=fnd(i);
				else if(fnd(i)!=first)break;//����ȼ���

				rr++;
			}


		}

	cout<<rr;

}
void init()//���鼯�Ļ���
{
		for(int i=1;i<=n;i++)
	{
			for(int j=1;j<=n;j++)
			{
				if(i>=j)continue;
				if(abs(key[i]-key[j])==1)
				last[i]=root(j);
		}

	}
}
//base ���ڵ� last �ϲ�ڵ�
int root(int x)
{
	if(last[x]==x)return x;
	else return (last[x]=root(last[x]));
}
void mrg(int x,int y)//x�ĸ��ڵ�ָ��y�ĸ��ڵ�
{
	last[root(x)]=root(y);
}
