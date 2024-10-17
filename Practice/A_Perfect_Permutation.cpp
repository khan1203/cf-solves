// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int arr[n + 9];
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }

        for (int i = 1; i < n; i += 2)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << ' ';
        }
    }
    else
        cout << -1 << nl;

    return 0;
}