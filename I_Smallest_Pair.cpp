#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t)
    {
        int n;
        cin >> n;
        long long arr[n], temp = 0, temp2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j] + j - i;

                if (temp == 0 || temp > sum)
                {
                    temp = sum;
                }
            }
        }

        cout << temp << "\n";

        t--;
    }

    return 0;
}