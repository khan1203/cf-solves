#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    long long e, m, b, co = 0;
    cin >> e >> m >> b;

    long long min1 = min(m, b);
    long long min2 = min(min1, e);

    e -= min2;
    m -= min2;
    b -= min2;
    co += min2;

    long long n = e / 2;
    long long k = 2 * b;

    if (n <= b)
    {
        e -= 2 * n;
        b -= n;
        co += n;
    }
    else if (e >= k)
    {
        e -= k;
        b -= b;
        co += k/2;
    }

    cout << co << "\n";

    return 0;
}