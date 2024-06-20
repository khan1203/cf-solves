// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int x)
{
    if (x == 0)
        return;
    cout << x;
    if (x - 1 > 0)
    {
        cout << " ";
    }
    solve(x - 1);
}

int main()
{
    int n;
    cin >> n;
    solve(n);

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}