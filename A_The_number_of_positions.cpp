// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n, a, b, pos;
    cin >> n >> a >> b;

    cout << n - max(a + 1, n - b) + 1;
}

int main()
{
    solve();

    return 0;
}