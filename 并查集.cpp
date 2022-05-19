#include<iostream>
#include<cstring>
#include<cmath>
#define load 50005
//并查集：用于快速判断两个元素是否在同一个集合中。
//同一个集合中的元素是连通的。
using namespace std;
int key[load];//内容为数字
int last[load];//元素x的指向的上一个元素是last[x]，如果last[x]=x，那么x是根。

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

int root(int x)  //寻找某个节点的根节点
{
	if(last[x]==x)return x;
	last[x]=root(last[x]);	//将元素的上一个节点直接改为根节点。
	return last[x];
}
void mrg(int x,int y)//连接节点x和y。
{
	last[root(x)]=root(y);//把x的根节点连接到y，等于减少了一个根节点。
}
