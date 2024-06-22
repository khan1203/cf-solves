// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}

void solve()
{
    // Fast_io();
    int n;
    cin >> n;

    int sum_m = 0, sum_c = 0;

    while (n--)
    {
        int m, c;
        cin >> m >> c;

        if(m>c){
            sum_m++;
        }
        else if(c>m){
            sum_c++;
        }
    }

    if (sum_m > sum_c)
    {
        cout << "Mishka" << nl;
    }
    else if (sum_m < sum_c)
    {
        cout << "Chris" << nl;
    }
    else if (sum_m == sum_c)
    {
        cout << "Friendship is magic!^^" << nl;
    }
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}