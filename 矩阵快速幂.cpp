#include<iostream>
#include<ctime>
#define inf 1000000007
typedef  unsigned long long ULL;
ULL TR;
ULL key[2][2]={1,1,1,0};
ULL k0[2][2]={1,1,1,0};

using namespace std;
void mul(ULL a[][2],ULL b[][2])
{
    ULL tp[2][2];

     for(int r=0;r<=1;r++)
        for(int c=0;c<=1;c++)
    {
        tp[r][c]=0;
        for(int i=0;i<=1;i++)
        {
        tp[r][c]=(tp[r][c]%inf+((a[r][i]%inf)*(b[i][c]%inf))%inf)%inf;
        }
    }

          for(int r=0;r<=1;r++)
        for(int c=0;c<=1;c++)
        {
            a[r][c]=tp[r][c];
        }




}
void fp(ULL power)
{
    ULL tp[2][2]={1,0,0,1};
    while(7)
    {
     if(power==1)break;
        if(!(power&1))//    oushu
    {
        power>>=1;//        power/=2;
        mul(key,key);

    }
        else
        {
            power--;
            mul(tp,key);

        }

    }
    mul(key,tp);

}

int main()
{
  cin>>TR;
    fp(TR);
    cout<<key[0][0];
   // cout<<endl<<clock();
	return 0;
}
