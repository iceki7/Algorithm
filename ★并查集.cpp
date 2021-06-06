#include<iostream>
#include<cstring>
#include<cmath>
#define load 50005
//并查集版本，将所有元素划分为等价类，并设定代表元
using namespace std;
int key[load];//内容为数字
int last[load];//下标为数字

//按次序枚举。
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
				else if(fnd(i)!=first)break;//多个等价类

				rr++;
			}


		}

	cout<<rr;

}
void init()//并查集的划分
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
//base 根节点 last 上层节点
int root(int x)
{
	if(last[x]==x)return x;
	else return (last[x]=root(last[x]));
}
void mrg(int x,int y)//x的根节点指向y的根节点
{
	last[root(x)]=root(y);
}
