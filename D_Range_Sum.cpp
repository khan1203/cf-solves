#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    long long n1, n2, sum;

    while (t)
    {
        cin >> n1 >> n2;

        if (n1 < n2)
        {
            sum = ((n2 - n1 + 1) * (n1 + n2)) / 2;
        }
        else sum = ((n1 - n2 + 1) * (n2 + n1)) / 2;

        // for (int i = n1; i < n2 + 1; i++)
        // {
        //     sum += i;
        // }

        cout << sum << "\n";

        t--;
        sum = 0;
    }

    return 0;
}