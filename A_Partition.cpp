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

    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            c += v[i];
        }
        else
        {
            b += v[i];
        }
    }

    cout << b - c << nl;
    return 0;
}