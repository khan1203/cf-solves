#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, co = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            int temp = 0;
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                co++;
            }
        }

        int maxSum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum1 = 0;
                for (int k = i; k <= j; k++)
                {
                    sum1 += arr[k];
                }
                if (maxSum < sum1)
                {
                    maxSum = sum1;
                }
            }
            
        }

        cout<<maxSum<<" "<<co;
    }

    return 0;
}