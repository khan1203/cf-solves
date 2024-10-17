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
    Fast_io();

    ll n;
    cin >> n;
    vector<ll> arr(n, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<ll>());

    vector<ll> vec;
    vec.push_back(arr[0]);
    ll sum = arr[0];

    for (ll i = 1; i < n; i++)
    {
        if (arr[i] != vec.back())
        {
            vec.push_back(arr[i]);
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}
