#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int totalSum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalSum += a[i];
        }

        vector<vector<bool>> dp(n + 1, vector<bool>(totalSum + 1, false));

        dp[0][0] = true;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= totalSum; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int minDifference = INT_MAX;
        for (int s1 = 0; s1 <= totalSum / 2; s1++)
        {
            if (dp[n][s1])
            {
                int s2 = totalSum - s1;
                minDifference = min(minDifference, abs(s2 - s1));
            }
        }

        cout << minDifference << endl;
    }

    return 0;
}
