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

int main()
{

    ll n;
    cin >> n;

    ll arr[n + 9];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll t;
    cin >> t;

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}