// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll steps(ll max, ll min)
{
    ll co = 0;
    ll dif = max - min;
    if (dif > 10)
    {
        co = dif / 10;
        int rest = dif % 10;
        // cout << rest << " " << co << "\n";
        if (rest > 0)
            co++;
    }
    else
    {
        co++;
    }
    return co;
}

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (a > b)
    {
        cout << steps(a, b) << "\n";
    }
    else
    {
        cout << steps(b, a) << "\n";
    }
}

int main()
{

    // solve();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}