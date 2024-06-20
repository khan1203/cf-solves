#include <bits/stdc++.h>
#define ll long long
using namespace std;

int largestDivisor(int n)
{
    int largest_divisor = *max_element(
        begin(vector<int>{1}),
        begin(vector<int>(n / 2)),
        [&](int i, int j)
        { return n % i == 0 && n % j == 0 ? i < j : false; });

    return largest_divisor;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }

        for (int i = 1; i <= n; i++)
        {
            swap(arr[i], arr[largestDivisor(i)]);
        }

        int index = -1;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1)
                index = i;
        }

        cout<<index<<"\n";
    }

    return 0;
}