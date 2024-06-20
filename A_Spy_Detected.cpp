// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n + 1];
    int cnt[101] = {0};
    for (int i = 1; i <= n; i++) // O[100]
    {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    int val;
    for (int i = 1; i <= 100; i++) // O[100]
    {
        if (cnt[i] == 1)
        {
            // cout<<i<<" ";
            val = i;
            break;
        }
    }

    for(int i=1; i<=n; i++){
        if(arr[i]==val){
            cout<<i<<"\n";
        }
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