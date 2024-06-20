#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n, aco = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int gco = 0, sco = 0, eco = 0, co = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            co++;
            if (arr[i] > arr[j])
            {
                gco++;
            }
            else if (arr[i] < arr[j])
            {
                sco++;
            }
            else if (arr[i] == arr[j])
                eco++;
        }

        if (gco == co || sco == co)
        {
            aco++;
        }
    }

    cout << aco << "\n";

    return 0;
}