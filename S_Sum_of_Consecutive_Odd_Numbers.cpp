#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        int large = x > y ? x : y;
        int small = x > y ? y : x;

        int sum = 0;
        for (int i = small + 1; i < large; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
