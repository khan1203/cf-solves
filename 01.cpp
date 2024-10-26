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
    Fast_io();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        string s1, s2;

        cin >> s1;
        cin >> s2;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
                cnt++;
        }

        if (k >= cnt)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}