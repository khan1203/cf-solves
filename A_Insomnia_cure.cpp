#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll co = 0;
    int k, l, m, n, d, arr[100000] = {0};

    cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            co++;
        }
    }

    cout<<co<<"\n";

    return 0;
}