#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, temp = -1, g = 0;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;

        if (m != temp)
            g++;

        temp = m;
    }

    cout<<g<<"\n";

    return 0;
}