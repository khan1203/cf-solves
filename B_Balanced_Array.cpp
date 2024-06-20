// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, hf;
    cin >> n;

    hf = n / 2;

    if (hf % 2 == 0)
    {
        cout << "YES\n";

        int even_sum = 0;
        for (int i = 1, j = 2; i <= hf; i++, j += 2)
        {
            cout << j << " ";
            even_sum += j;
        }

        int odd_sum = 0;
        for (int i = 1, j = 1; i < hf; i++, j += 2)
        {
            cout << j << " ";
            odd_sum += j;
        }

        cout<<even_sum-odd_sum<<"\n";
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