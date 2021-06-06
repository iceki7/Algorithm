#include<iostream>
#include<iomanip>

#include<algorithm>

#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>

#include<vector>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<deque>

#include<conio.h>

#define pi 3.1415926535


using namespace std;

queue <int>qx,qy;   //push;pop;front;back;
stack <int>sx,sy;   //push;pop;top;

map <string,int>mp;// count;insert(make_pair());[]访问会直接创建元素;

stack<int>s;
queue<int>q;
priority_queue<int>pq;

vector<int>v;   //push_back;erase;remove

/*

vector<int>:: iterator itr;
v.erase(itr)
v.erase(itr lef,itr end)    //end为待删除元素的下一个
itr end~=v.remove(itr,itr,val); //按值移除，但不改变总长度




*/

/*
树的表示：
邻接矩阵+顶点表（V-E）、边列表(E-V)
双亲链表(P)、子链表（C）、顺序表（限二叉树）
兄弟链表(PB)、二叉树转换（CB,11）
*/

/*

带权最短路径：

Floyd
S'[i][j]=min(S[i][j],S[i][k]+S[k][j]) //DP   S(n-2)[i][j]

//从i号顶点到j号顶点只经过前k号点的最短路程。

S(i,j,k)=min[   S(i,j,k-1),min_{x,y}_(S(i,x,k-1)+V(x,k)+V(k,y)+S(y,j,k-1))    ]


Dijstra

S(t)=min[  S(t0)+W(t0,t),S(t1)+W(t1,t)...  ]

*/
/*
二叉排序树：
左子树任何权值<根权 中序遍历得到有序列

删除：
删除P，
R(tl)

平衡排序树：子树深度差BF<2
调整为平衡：从叶子向根递归，检查BF
*/

/*
B tree

*/


/*
Huffman树：WPL最小  Sum(LiWi)
*/
/*
AOE网（任何顶点到达前必须所有的前驱都到达）

定义Ve(j):到达顶点j所需的最短时间。
则容易求得：Ve(j)=max{Ve(i)+wij}

Ve(E)构造出了一条路径，称为关键路径。它是S到E的最长路径。

Ve(i):到达顶点i所允许的最长时间，最小Ve(i)=min{Vl(j)-wij}

Ee(x)=Ve(x)
El(jk)=Vl(k)-wjk
*/
/*
图表示
邻接矩阵+顶点表 data(V)+B(V,V')
邻接表：V'(V)=(V1,V2,V3...)

*/

/*
Prim算法：点逐渐扩张
E.append(min(W(U,V)))

Kruskal：边集合中选择
判断是否形成回路：并查集
E.append()

*/

/*
typedef struct{
   short ltag,rtag;//tag=1时，指针代表前驱/后继关系，否则代表树关系
   struct node* l,*r;

        //LDR:节点N有左子时，它的前驱是左子树的最右节点
        //        N有右子时，它的后继是右子树的最左节点

}node;//线索二叉树
*/


/*
void DFSn()
{

    while(!s.empty())
    {
        now=s.top();
        //check node
        if(able)
         {
         s.push();continue;
         }

         s.pop();
    }
}

void DLR_DFS()//DLR,DFS 非递归深搜/树遍历
{
    while(1)
    {
        if(stackempty)break;
        now=top();
        //visit(now);DLR
        if(leftexist&&!mark)
        {
            push(left)
            continue;
        }
        //visit     LDR
        if(rightexist&&!mark)
        {
            push(right)
            continue;
        }
        //visit     LRD
        pop();
    }

}
void BFS()//广搜/层次遍历
{
        qx.push(1);
        qy.push(1);

    while(!qx.empty())
    {

    mark[qy.front()][qx.front()]=true;
    if(qx==tx&&qy==ty)
    {
        return;
    }

        for(...)
        {

            if(!mark[qy.front()+i][qx.front()+j])qx.push(x+j);//邻节点入栈，但不会立即开始搜索
        }

        qx.pop();

    }


}*/
int main()
{          mp.insert(make_pair("ssf",6));
           mp["happy"]=1;

           cout<<mp.count("sc")<<endl;

           cout<<mp["sc"]<<endl;

           cout<<mp.count("sc");


  // cout<<round(5.43);
   // cout<<fixed<<setprecision(4)<<pi;
   // freopen("input2.txt","r",stdin);
   // int atoi(char*);
   	//char *itoa (int,char*,int base);

    //char getchar();//直到换行才执行结束//<cstdio>

    //cin.getline(char*,int,char);
    return 0;
}



