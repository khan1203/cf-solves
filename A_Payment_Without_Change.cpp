//by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    if ((n * a) + b < s)
    {
        cout << "NO\n";
        return;
    }
    ll ck = s / n;
    if ((ck * n) + b < s)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}