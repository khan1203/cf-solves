#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n, temp = 0, max = INT_MIN, min = INT_MAX, max_i, min_i, t;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_i = i;
        }
        if (min >= arr[i])
        {
            min = arr[i];
            min_i = i;
        }
    }

    t = max_i + (n - 1 - min_i);

    if(max_i>min_i) t--;

    // cout << max_i << " " << min_i << "\n";
    cout << t << '\n';

    return 0;
}
