// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        int a = v[0];
        int b = v[1];
        int c = v[2];

        int it = 5;
        while (it)
        {
            if (a < b)
            {
                a++;
                it--;
            }
            else if (c < a)
            {
                c++;
                it--;
            }
            else
            {
                b++;
                it--;
            }
        }

        cout << a * b * c << endl;
    }
    return 0;
}