// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    if (k <= n)
    {
        if (n % 2 != 0)
        {
            if (k % 2 != 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "YES\n";
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