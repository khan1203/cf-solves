// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1 && k > 0; i++)
    {
        int transfer = min(a[i], k);
        a[i] -= transfer;
        a[n - 1] += transfer;
        k -= transfer;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    Fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
