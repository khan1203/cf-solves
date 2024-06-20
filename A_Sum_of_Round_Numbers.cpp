#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, temp, m = 1, co = 0;
        cin >> n;

        temp = n;
        while (temp != 0)
        {
            int last_digit;
            last_digit = temp % 10;
            if (last_digit != 0)
                co++;
            temp /= 10;
        }

        cout << co << "\n";

        while (n != 0)
        {
            int last_digit;
            temp = n;
            last_digit = n % 10;
            last_digit *= m;
            m *= 10;

            if (last_digit != 0)
                cout << last_digit << " ";
            n = n / 10;
        }
        cout << "\n";
    }

    return 0;
}