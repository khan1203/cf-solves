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

    int arr[n];
    vector<int> even(n);
    vector<int> odd(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());

    int max1 = even[0] + even[1];
    int max2 = odd[0] + odd[1];

    if (max1 > max2)
        cout << max1 << endl;
    else
        cout << max2 << endl;

    return 0;
}