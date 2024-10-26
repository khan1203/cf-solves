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
        int n, cnt = 0;
        cin >> n;

        string p1, p2;
        cin >> p2 >> p1;

        for (int i = 0; i < n; i++)
        {
            if (p1[i] == '1')
            {
                if (p2[i] == '0')
                {
                    cnt++;
                }
                else if (i + 1 < n && p2[i + 1] == '1')
                {
                    p2[i + 1] = 'x';
                    cnt++;
                }
                else if (i - 1 >= 0 && p2[i - 1] == '1')
                {
                    p2[i - 1] = 'x';
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}