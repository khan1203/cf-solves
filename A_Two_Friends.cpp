// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
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
    int n;
    cin >> n;

    int arr[n + 9];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int co = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[arr[i]] == i)
        {
            if (arr[i] != i)
            {
                co++;
            }
        }
    }

    if (co >= 1)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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