#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int k, r;
    cin >> k >> r;
    int total_price = -1;
    int i = 0;

    while (total_price % 10 != r && total_price % 10 != 0)
    {
        i++;
        total_price = i * k;
    }

    cout<<i<<"\n";

    return 0;
}