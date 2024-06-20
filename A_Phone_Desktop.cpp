// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << 0 << "\n";
        return;
    }
    else
    {
        ll s2;
        if (y == 0)
        {
            ll fn = ceil(x / 15.0);
            cout << fn << "\n";
            return;
        }
        else
        {
            ll s1_left;
            if (y % 2 == 0)
            {
                s2 = ceil(y / 2.0);
                s1_left = s2 * 7;
            }
            else
            {
                s2 = ceil(y / 2.0);
                s1_left = (s2 * 7) + 11;
            }
            if (x > s1_left)
            {
                ll diff = x - s1_left;
                ll s2_left = ceil(diff / 15.0);
                cout << s2 + s2_left << "\n";
            }
            else
            {
                cout << s2 << "\n";
            }
        }
    }
}

int main()
{

    // solve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}