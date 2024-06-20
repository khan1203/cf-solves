// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll sum = 2;
    for(int i=2; i<=n; i++)
    {
        sum += pow(2, i);
    }

    cout << sum << "\n";
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}