#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int ch = 'A'; ch <= 'Z'; ch++)
    {
        int start = n;
        int end = -1;

        for (int j = 0; j < n; j++)
        {
            if (str[j] == ch)
            {
                start = min(start, j);
                end = max(end, j);
            }
        }
        for (int i = start; i <= end; i++)
        {
            if (str[i] != ch)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
