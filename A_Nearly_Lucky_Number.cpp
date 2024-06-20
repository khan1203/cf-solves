#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, co = 0;
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 7 || digit == 4)
        {
            co++;
        }
        n /= 10;
    }

    if (co == 4 || co == 7)
    {
        cout << "YES"
             << "\n";
    }
    else
        cout << "NO"
             << "\n";
    return 0;
}