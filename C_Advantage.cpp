// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int highest(int arr[], int index, int size)
{
    int max = INT_MIN;
    for (int i = 1; i <= size; i++)
    {
        if (i == index)
        {
            continue;
        }
        else
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
    }

    return max;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n + 9];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int high = highest(arr, i, n);
        int res = arr[i] - high;
        cout << res << " ";
    }
    cout << "\n";
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