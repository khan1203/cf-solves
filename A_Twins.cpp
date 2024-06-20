#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int n, co = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int k = i; k >= 0; k--)
        {
            sum1 += arr[i];
        }
        for (int j = i + 1; j < n; j++)
        {
            sum2 += arr[j];
        }

        co++;
        if (sum1 > sum2)
        {
            // cout << sum1 << " " << sum2 << "\n";
            cout<<co<<"\n";
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}