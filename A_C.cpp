#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n, co = 0;
        cin >> a >> b >> n;

        while (max(a, b) <= n)
        {
            if (a > b)
                b += a;
            else
                a += b;
            co++;
        }
        cout << co << "\n";
    }

    return 0;
}
