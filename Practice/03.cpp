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

ll countCombinations(ll S)
{
    ll count = 0;

    for (ll x = 0; x <= S; ++x)
    {
        ll y = S - x;
        if (y >= 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    Fast_io();

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, sum, cnt = 0;
        cin >> n;

        vector<ll> arr(n);

        for (ll i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
            cnt += arr[i];
        }

        cin >> sum;

        cout << countCombinations(sum - cnt) << "\n";
    }
    return 0;
}