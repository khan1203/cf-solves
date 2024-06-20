#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    long long num;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> num;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << i;
            c++;
            break;
        }
    }

    if (c == 0)
    {
        cout << -1;
    }
    return 0;
}