#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    long long n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long min1 = min(((k * l) / nl), (c * d));
    long long min2 = min(min1, (p / np));
    long long toast = min2 / n;
    cout << toast << "\n";

    return 0;
}