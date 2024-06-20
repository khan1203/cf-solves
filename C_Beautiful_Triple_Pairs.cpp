// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll co = 0;
    for (int j = 0; j < n - 2; j++)
    {
        if (arr[j] == arr[j + 1] && arr[j] != arr[j + 2])
        {
            co++;
        }
        else if (arr[j] == arr[j + 2] && arr[j] != arr[j + 1])
        {
            co++;
        }
        else if (arr[j + 1] == arr[j + 2] && arr[j + 1] != arr[j])
        {
            co++;
        }
    }

    cout<<co<<endl;
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