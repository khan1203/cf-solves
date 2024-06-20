#include <bits/stdc++.h>
using namespace std;

long long func(long long n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
        return -(n + 1) / 2;
}

int main()
{
    long long num;
    cin >> num;
    cout << func(num) << "\n";

    return 0;
}