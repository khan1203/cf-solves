#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, co = 0;
        cin >> n;

        if (n == 1 || n == 2)
        {
            co = 0;
            cout << co << "\n";
            continue;
        }

        if (n % 2 == 0)
        {
            co = n / 2 - 1;
        }
        else
        {
            co = ceil(n / 2);
        }

        cout << co << "\n";
    }

    return 0;
}