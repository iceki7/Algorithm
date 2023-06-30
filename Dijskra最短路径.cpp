#include<iostream>
#include<cstring>
#include<vector>
#define LOD 50
using namespace std;
int edg[LOD+2][LOD+2];//edge
int best[LOD+2];
vector<int> did;
vector<int> undid;
int source=0;

//无向带权图
//求任意两点间的最短路径，Dijskra算法。

//从源点k到某个点y的[最短]距离  best(k,y)。

//设目前已经求出了best值的点的集合为D,没求出的为U。
//假设U中那些与D相邻的点的集合为V
// 那么 设{d*,u*}= argmin_{d,v,d和v相连，且v∈V，d∈D}( best(k,d)+w(d,v) ) 
//那么可以证明：best(k,v*)=best(k,d*)+w(d*,v*),v*就被添加到集合D中了。



void del(int v)
{

    for(vector<int>::iterator itr=undid.begin();itr!=undid.end();itr++)
    {
        if(*itr==v)
        {  undid.erase(itr);return;}
    }
}


void dijskra()//寻找min_w{E(i,j)}
{
  
    best[source]=0;
    did.push_back(source);
    
  for(int tms=1;tms<=LOD-1;tms++)
  {
      int tj,temp;
         for(vector<int>::iterator i=did.begin();i!=did.end();i++)   //did：已经找到了解的节点集合。
        {
            for(vector<int>::iterator j=undid.begin();j!=undid.end();j++)
            {
               if(!edg[*i][*j])continue;//i、j不连通。
                
                temp=best[*i]+edg[*i][*j]; 
               if(mintemp<=temp)continue;
           
            //始终保持te是目前连接did、undid集合的最小的那个权值。

               mintemp=temp;
               tj=*j;
              

            }

        }
    best[tj]=mintemp;
          did.push_back(tj);
          del(tj);
    }
    return;

}


int main()
{
    return 0;
}
