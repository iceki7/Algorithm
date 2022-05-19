#include <iostream>

using namespace std;

typedef unsigned long long ll;
const ll mod = 1e7;

//a ^ b
ll fastpower(ll a,ll b,ll m=mod)
{
    if (b == 0)return 1;
    ll y = 1, x = a%m;
    while (b>1)
    {
            if (b & 1)//是奇数
                y = (y * x)%m;

                x =(x*x)%m;
            
        b >>= 1;
    }
    y = (y * x)%m;
    return y;
}




int main() {
    cout  << fastpower(5, 7459,31847) << endl;
    cout << fastpower(2,11, 31847) << endl;
    return 0;
}
