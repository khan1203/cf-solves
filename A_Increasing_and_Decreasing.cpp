// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
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
    int a, b, n;
    cin >> a >> b >> n;

    vector<int> arr(n);
    arr[0] = a;
    arr[n-1] = b;
    for (int i = a + 1, j = 1; i < b; i++)
    {
        if (2*i > (a + b))
        {
            arr[j] = i;
            j++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<nl;
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