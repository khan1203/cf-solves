// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n + 9];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int ser = 0, dim = 0;
    for (int i = 1, j = n, turn=1; i<=j;)
    {
        if (turn % 2 != 0)
        {
            int max_val = max(arr[i], arr[j]);
            ser += max_val;
            if (max_val == arr[i])
            {
                i++;
            }
            else
            {
                j--;
            }

            // cout << "sereja: " << ser << "\n";
        }
        else
        {
            int max_val = max(arr[i], arr[j]);
            dim += max_val;
            if (max_val == arr[i])
            {
                i++;
            }
            else
            {
                j--;
            }
            // cout << "dima: " << dim << "\n";
        }
        turn++;
    }

    cout << ser << " " << dim << "\n";
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}