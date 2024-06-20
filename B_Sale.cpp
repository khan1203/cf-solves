// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout<<endl;

    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        if (v[i] < 0)
        {
            sum += v[i];
        }
    }

    cout<<(-1)*sum<<endl;
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}