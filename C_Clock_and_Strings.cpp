// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (d > c)
    {
        int temp = d;
        d = c;
        c = temp;
    }

    if(b<c){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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