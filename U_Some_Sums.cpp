#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, a, b;

    cin >> N >> a >> b;

    int sum1 = 0;
    for (int i = 1; i <= N; i++)
    {
        int temp = i;
        int sum2 = 0;
        while (temp)
        {
            int rem = temp % 10;
            sum2 += rem;
            temp /= 10;
        }

        if (a <= sum2 && sum2 <= b)
        {
            sum1 += i;
        }
    }

    cout << sum1;
    return 0;
}
