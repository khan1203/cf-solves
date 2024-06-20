// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int len = str.size();

    if (len % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    int mid = len / 2;
    // cout << mid << "\n";

    bool isSqt = true;
    for (int i = 0, j = mid; i < mid; i++, j++)
    {
        if (str[i] != str[j])
        {
            isSqt = false;
            break;
        }
    }

    if (isSqt)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    // solve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}