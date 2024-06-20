#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, low = INT_MAX, index;
    cin >> n;

    int arr[n];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < low)
        {
            low = arr[i];
            index = i;
        }
    }

    cout<<low<<" "<<index;
    return 0;
}