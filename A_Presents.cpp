#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int fr1[n];
    int fr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> fr1[i];
    }

    for (int j = 0; j < n; j++)
    {
        fr2[fr1[j] - 1] = j + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << fr2[i] << " ";
    }
    return 0;
}