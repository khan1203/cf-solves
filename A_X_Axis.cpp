// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}

void solve()
{
    // Fast_io();
    int x, y, z;
    cin >> x >> y >> z;

    if (x != y && y != z && x != z)
    {
        int mid, sum = 0;
        if ((x > y && x < z) || (x < y && x > z))
        {
            sum = abs(x - y) + abs(x - z);
        }
        else if ((y > x && y < z) || (y < x && y > z))
        {
            sum = abs(y - x) + abs(y - z);
        }
        else
        {
            sum = abs(z - x) + abs(z - y);
        }

        cout << sum << nl;
    }
    else
    {
        if (x == y)
        {
            cout << abs(x-z) << nl;
            return;
        }
        else if (y == z)
        {
            cout <<abs(y-x) << nl;
            return;
        }
        else if (x == z)
        {
            cout << abs(x-y) << nl;
            return;
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