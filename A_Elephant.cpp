#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, r, co = 0;
    cin >> n;

    if (n / 5 > 0)
    {
        r = n / 5;
        if (n - (5 * r) > 0)
        {
            r++;
        }
        cout << r << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }

    return 0;
}