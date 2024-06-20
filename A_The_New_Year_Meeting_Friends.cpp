// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // int mid = 0.5 * (arr[0] + arr[2]);
    // cout<<dif<<"\n";
    // int dis_from_mid = abs(arr[1] - mid);

    // cout<<dis_from_mid<<"\n";
    int sub = arr[0] - arr[2];

    // int res = sub + dis_from_mid;

    cout << sub << "\n";
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}