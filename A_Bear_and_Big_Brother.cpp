#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, co = 0;

    cin >> a >> b;

    while (a <= b)
    {
        a = a * 3;
        b = b * 2;

        co++;
    }

    cout<<co<<"\n";

    return 0;
}