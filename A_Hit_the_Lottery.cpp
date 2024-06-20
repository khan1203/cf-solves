#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll m, b;
    cin >> m;

    ll s = m - ((m / 100) * 100);
    ll p = s - ((s / 20) * 20);
    ll q = p - ((p / 10) * 10);
    ll x = q - ((q / 5) * 5);
    // ll y = x - ((x / 1) * 1);
    // cout << s << endl;
    // cout << p << endl;
    // cout << q << endl;
    // cout << x << endl;

    b = (m / 100 + s / 20 + p / 10 + q / 5 + x / 1);
    cout << b << "\n";

    return 0;
}