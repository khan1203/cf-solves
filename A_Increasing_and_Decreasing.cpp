// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        // Fast_io();
        int a, b, n;
        cin >> a >> b >> n;

        int sum = ((n - 2) * (n - 1)) / 2;

        if ((b - a < 3) || b - a <= sum)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> arr(n);
        arr[0] = a;
        arr[n - 1] = b;

        int inc = 0;
        bool isPossible = true;
        for (int i = n - 2; i > 0; i--)
        {
            inc++;
            arr[i] = arr[i + 1] - inc;
            if (arr[i] - arr[0] <= arr[i + 1] - arr[i])
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << nl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}