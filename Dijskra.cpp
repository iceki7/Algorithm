#include<iostream>
#include<cstring>
#include<vector>
#define LOD 1005

using namespace std;
int edg[LOD][LOD];//edge
int st[LOD][LOD];//answer
bool done[LOD];
vector<int> did;
vector<int> undid;

int n,m;
//max_i,j{st(i,j)}
//st(i,j)=min_x{WP(i,j,x)}
//WP:从i到j的路径x所对应的权值


//求任给的两点之间关于某个测度的最佳的路径的问题，Dijskra版本

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

  for(int tm=0;tm<n-1;tm++)
  {
      int ti,tj,te;
      bool fnd;
      fnd=false;
         for(vector<int>::iterator i=did.begin();i!=did.end();i++)
    {
       for(vector<int>::iterator j=undid.begin();j!=undid.end();j++)
        {
               if(!edg[*i][*j])continue;

               if(edg[*i][*j]<te||!fnd)
               {
               te=edg[*i][*j];
               tj=*j;
               ti=*i;
               fnd=true;
               }

        }

    }
      if(fnd)
      {
           for(vector<int>::iterator i=did.begin();i!=did.end();i++)
        {
            st[*i][tj]=st[tj][*i]=max(st[*i][ti],edg[ti][tj]);//特征函数，根据问题类型的不同而有所不同


            //通常的特征函数：st(j)=st(i)+e~(i,j)
        }
          did.push_back(tj);
          del(tj);
      }


  }

}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int ty,tx,tt;
        scanf("%d%d%d",&tx,&ty,&tt);
        if(edg[tx][ty]!=0&&edg[tx][ty]<tt)continue;
        edg[tx][ty]=edg[ty][tx]=tt;


    }
    for(int i=2;i<=n;i++)
     undid.push_back(i);
     did.push_back(1);

    dijskra();

    int rr=-1;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        {
            if(i==j)continue;

//         cout<<"sm("<<i<<","<<j<<")="<<st[i][j]<<endl;
            if(st[i][j]==0)
            {
                cout<<-1;return 0;
            }
            if(rr==-1||rr<st[i][j])
                rr=st[i][j];
        }
    cout<<rr;

    return 0;
}
