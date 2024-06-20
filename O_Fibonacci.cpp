#include <bits/stdc++.h>
using namespace std;

long long fib(int n)
{
    if (n <= 1)
        return n;
    long long prev1 = 0, prev2 = 1;
    for (int i = 2; i <= n; ++i)
    {
        long long curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}

int main()
{
    long long n1, result;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        result = fib(i);
    }

    cout << result;

    return 0;
}