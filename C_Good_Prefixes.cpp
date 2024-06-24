// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        arr.push_back(z);
    }

    ll sum = 0, maxel = INT_MIN, gdarr = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxel = max(maxel, arr[i]);

        if (sum - maxel == maxel)
        {
            gdarr++;
        }
    }

    cout<<gdarr<<nl;
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