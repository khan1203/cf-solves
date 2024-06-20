#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    char arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int digit = arr[i] - 48;
        sum += digit;
    }

    cout << sum << '\n';

    return 0;
}