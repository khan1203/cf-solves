#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, co1, co2 = 0;
    cin >> t;

    long long n, temp;

    while (t)
    {
        cin >> n;
        temp = n;

        co1 = 0;

        while (temp % 2 == 0)
        {
            co1++;
            temp /= 2;
        }

        if (co1 >= co2)
        {
            co2 = co1;
        }

        t--;
    }

    cout<<co2<<"\n";

    return 0;
}