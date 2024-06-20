#include <bits/stdc++.h>
using namespace std;

void subArrays(const vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int max = INT_MIN;
            for (int k = i; k <= j; k++)
            {
                // cout << arr[k];
                if (arr[k] > max)
                {
                    max = arr[k];
                }
            }
            cout << max << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        subArrays(arr);
    }

    return 0;
}
