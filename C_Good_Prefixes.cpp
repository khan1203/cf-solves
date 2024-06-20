// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }

    int sum = 0, co = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >=0; j--)
        {
            if (v[j] != v[i])
            {
                sum += v[j];
                if (sum == 0 || sum == v[i])
                {
                    co++;
                }
            }
        }
    }

    cout << co << '\n';
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