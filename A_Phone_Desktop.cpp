// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << 0 << "\n";
        return;
    }
    else if ((x <= 15 && y == 0) || (x <= 7 && y == 2) || (x == 0 && y <= 2) || (x <= 11 && y == 1))
    {
        cout << 1 << "\n";
        return;
    }

    int ls = ceil(y / 2.0);
    if (x > (7 * ls))
    {
        int ss = ((x - (7 * ls)) / 15) + 1;
        cout << ls + ss << "\n";
    }
    else
    {
        cout << ls << "\n";
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