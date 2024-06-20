// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min = INT_MAX, start_i = -1, end_i = -1;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(v[i] - v[j]) < min)
            {
                start_i=i;
                end_i=j;
            }
        }
    }

    cout<<start_i<<" "<<end_i<<"\n";
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}