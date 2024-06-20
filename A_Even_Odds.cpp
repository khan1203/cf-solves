#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll n, k;
    cin >> n >> k;

    ll midpoint = (n % 2 == 0) ? n / 2 : (n + 1) / 2;

    if(k<=midpoint)
    {
        cout<<(2*k)-1;
    }
    else{
        cout<<2*(k-midpoint);
    }

    return 0;
}