// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int co = 0;
    for (int i = 0; i < str.length(); i++)
    {
        co++;
    }

    if (co > 10){
        cout<<str[0]<<co-2<<str[str.length()-1]<<"\n";
    }
    else{
        cout<<str<<"\n";
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