// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int arr[26] = {0};

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 65;
        // cout<<index<<"\n";
        if (arr[index] == 0)
        {
            arr[index]+=2;
            sum += 2;
        }
        else
        {
            arr[index]++;
            sum++;
        }
    }

    cout << sum << "\n";
}

int main()
{
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}