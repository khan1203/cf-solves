#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n, a, p = 0, uc = 0;
    cin >> n;

    while (n--)
    {
        cin >> a;

        if (a < 0 && p > 0)
            p--;
        else if (a < 0 && p == 0)
            uc++;
        else if (a > 0)
            p += a;
    }

    cout << abs(uc) << "\n";

    return 0;
}