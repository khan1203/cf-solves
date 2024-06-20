#include <bits/stdc++.h>
#define ll long long
using namespace std;

string oddDivisor(long long x)
{
    if (x % 2 != 0)
        return "YES";

    for (long long i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            if (i % 2 != 0)
                return "YES";
        }

        if ((x / i) != i && (x / i) % 2 != 0)
            return "YES";
    }

    return "NO";
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        string result = oddDivisor(n);
        cout << result << "\n";
    }

    return 0;
}