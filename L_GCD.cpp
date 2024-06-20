#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b; // a=16 b=24  -> a=16 b=8 -> a=8 b=8

    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    // while (a != b)
    // {
    //     if (a > b)
    //     {
    //         a -= b;
    //     }
    //     else
    //     {
    //         b -= a;
    //     }
    // }

    cout<<a;
    return 0;
}