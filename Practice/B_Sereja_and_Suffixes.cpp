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

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> cnt(n + 1);
    set<int> s;
    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << endl;
    }

    return 0;
}