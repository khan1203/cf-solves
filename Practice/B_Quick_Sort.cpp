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

int min_operations_to_sort(vector<int> &p, int k)
{
    int n = p.size();
    int sorted_elements = 1;
    for (int i = 1; i < n; ++i)
    {
        if (p[i] > p[i - 1])
        {
            sorted_elements++;
        }
        else
        {
            break;
        }
    }

    if (sorted_elements == n)
        return 0;

    return (n - sorted_elements + k - 1) / k;
}

int main()
{
    Fast_io();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }

        int result = min_operations_to_sort(p, k);
        cout << result << endl;
    }

    return 0;
}
