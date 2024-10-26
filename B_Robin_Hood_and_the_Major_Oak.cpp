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

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, odd;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            odd = k / 2;
        }
        else
        {
            odd = ceil(1.0 * k / 2);
        }

        cout << (odd % 2 == 0 ? "YES\n" : "NO\n");
    }
    return 0;
}
