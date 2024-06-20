#include <bits/stdc++.h>
#define max 100
using namespace std;

int main()
{
    int t, n, arr[max], i, temp, j;
    cin >> t;

    while (t)
    {
        i = 0;
        cin >> n;
        temp = n;
        while (temp)
        {
            if (temp % 2 != 0)
            {
                arr[i] = temp % 2;
                i++;
            }
            temp /= 2;
        }

        int sum = 0, power=1;
        for (j = i - 1, power = 1; j >= 0; j--, power *= 2)
        {
            sum += arr[j] * power;
        }

        cout << sum << "\n";

        t--;
    }

    return 0;
}