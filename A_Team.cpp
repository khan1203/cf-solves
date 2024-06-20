#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, a, b, c, co = 0;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
        int sol = a + b + c;
        if (sol >= 2)
            co++;
    }

    cout<< co<<"\n";
    return 0;
}