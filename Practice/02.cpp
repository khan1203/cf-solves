#include <bits/stdc++.h>
#define ll long long
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

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll totalSum = 0;
    for (ll i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    ll leftSum = 0;
    bool found = false;
    for (ll i = 0; i < n; i++)
    {
        if (leftSum == (totalSum - leftSum - arr[i]))
        {
            cout << leftSum + arr[i] << " " << i + 1 << "\n";
            found = true;
            break;
        }
        leftSum += arr[i];
    }

    if (!found)
    {
        cout << "UNSTABLE" << "\n";
    }

    return 0;
}
