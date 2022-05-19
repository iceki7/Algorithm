#include<iostream>
using namespace std;
int herb[105][2];
int c,n;
int sm[1005][105];//容量为c时，只考虑前n件物品的最优方案
int main()
{
    cin>>c>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>herb[i][0]>>herb[i][1];//cost,value
    }
    for(int y=1;y<=c;y++)
        for(int x=1;x<=n;x++)
    {
        if(y-herb[x][0]<0)sm[y][x]=sm[y][x-1];//状态方程
        else
        sm[y][x]=max(sm[y][x-1],sm[y-herb[x][0]][x-1]+herb[x][1]);


    }
    cout<<sm[c][n];
    return 0;
}
