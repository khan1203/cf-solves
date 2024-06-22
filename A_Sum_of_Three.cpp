// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}

bool isValid(int x, int y, int z)
{
    if (x != y && y != z && x % 3 != 0 && y % 3 != 0 && z % 3 != 0)
    {
        return true;
    }
    else
        return false;
}

void solve()
{
    // Fast_io();
    int n;
    cin >> n;

    for (int x = 1; x < n - 2; x++)
    {
        for (int y = x + 1; y < n - 1; y++)
        {
            int z = n - x - y;
            if (z > y && isValid(x, y, z))
            {
                cout << "YES" << nl;
                cout << x << " " << y << " " << z << " " << nl;
                return;
            }
        }
    }

    cout<<"NO"<<nl;
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