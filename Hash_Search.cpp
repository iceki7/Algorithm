#include<iostream>
#include<cstring>
#include<cmath>
#define MX_SIZE 100003
using namespace std;
//输入若干字符串。
//每输入一个，判断之前是否已经重复出现过该串
char x[101];
char lib[MX_SIZE+2][102];
int len[MX_SIZE];
int n;
int cnt=1;
int hs() {
    int v=0;
    for(long unsigned int i=0;i<strlen(x);i++)
    {
        if(x[i]<='Z'&&x[i]>='A')x[i]+=32;
        v=(v+x[i]*10)%MX_SIZE;

    }
   // cout<<"hs("<<x<<")="<<v<<endl;
    return v;
}
bool same(int idx)
{
    if(strlen(x)!=len[idx])return false;

            for(int i=0;i<len[idx];i++)
            {
                if(x[i]!=lib[idx][i])
                return false;
            }
        return true;
}
bool insert() {
    int adr=hs();
    int round=0;


    while(round<MX_SIZE)
    {


       if(len[adr]==0)
      {
          strcpy(lib[adr],x);
          len[adr]=strlen(x);
           //cout<<"sert "<<x<<" in "<<adr<<endl;
           return true;
      }
      else if(same(adr))
         return false;


           adr=(adr+1)%MX_SIZE;

           round++;
    }
    exit(-1);
    return false;
}

int main()
{
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {

        scanf("%s",x);

          if(insert())
          {
              printf("No\n");cnt++;
          }
            else
            {
                printf("Yes\n");
            }





    }
    return 0;
}
