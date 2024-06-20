// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0, i=0;
    for (i = 0; sum < n;)
    {
        i++;
        sum = (i * i) + (2 * i) + 1;
    }

    cout<<i<<"\n";
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}