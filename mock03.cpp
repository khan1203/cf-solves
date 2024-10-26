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
    string w1, w2;

    while (cin >> w1 >> w2)
    {
        int len1 = w1.length();
        int len2 = w2.length();

        int i = 0, j = 0;

        while (i < len1 && j < len2)
        {
            if (w1[i] == w2[j])
            {
                j++;
            }
            i++;
        }

        if (j == len2)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}
