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

ll sumOfConsecutiveNumbers(ll a, ll b)
{
    ll n = b - a + 1;

    ll sum = (n * (a + b)) / 2;

    return sum;
}
int main()
{

    ll n, q;
    cin >> n >> q;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll s, e;
        if (l % 2 == 0 && r % 2 == 0)
        {
            s = l / 2;
            e = 0;
        }
        else if (l % 2 == 0 && r % 2 != 0)
        {
            s = l / 2;
            e = (r / 2) + 1;
        }
        else if (l % 2 != 0 && r % 2 == 0)
        {
            s = 0;
            e = 0;
        }
        else if (l % 2 != 0 && r % 2 != 0)
        {
            s = 0;
            e = (r / 2) + 1;
        }

        ll c1 = (l / 2) + 1;
        ll c2 = r / 2;

        ll mid = sumOfConsecutiveNumbers(c1, c2);

        cout << s + 2 * mid + e << endl;
    }
    return 0;
}