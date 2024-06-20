#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int j = 2; j*j <= num; j++) ///important to remember
    {
        if (num % j == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++) // input 23
    {
        if (isPrime(i))
            cout << i<<' ';
    }
}