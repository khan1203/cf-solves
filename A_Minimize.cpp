// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int a, b, c = INT_MAX;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            if (((i - a) + (b - i)) < c)
            {
                c = i;
            }
        }

        cout << (c - a) + (b - c) << endl;
    }
    return 0;
}