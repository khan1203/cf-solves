#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long double dr[n], o, total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> dr[i];
        total += (dr[i]);
    }

    o = (total / (n * 100))*100;

    cout<<o<<"\n";

    return 0;
}