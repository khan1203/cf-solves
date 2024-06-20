// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

bool solve()
{
    int n, sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr[0], arr[0] + n);
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int c_sum = arr[i] + arr[left] + arr[right];
            if (c_sum == sum)
            {
                return true;
            }
            else if (c_sum < sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return false;
}

int main()
{

    // solve();

    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
