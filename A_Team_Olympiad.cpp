// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int pro = 0, math = 0, pe = 0;
    int arr[n + 9];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1)
            pro++;
        else if (arr[i] == 2)
            math++;
        else
            pe++;
    }

    int min1=min(pro, math);
    int min2=min(min1,pe);

    cout<<min2<<"\n";

    for(int i=1; i<=n; i++){
        if()
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