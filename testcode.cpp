#include <bits/stdc++.h>
using namespace std;

void printSubarrays(const vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            // cout << "[";
            int max = INT_MIN;
            for (int k = i; k <= j; ++k)
            {
                // cout << arr[k];
                if (arr[k] > max)
                {
                    max = arr[k];
                }
                // if (k < j)
                // cout << ", ";
            }
            // cout << "]" << endl;
            cout << max << endl;
        }
    }
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

        printSubarrays(arr);
    }

    return 0;
}
