// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#include<cmath>
#define ll long long
using namespace std;

double dis(double x, double y)
{
    return sqrt(x * x + y * y);
}

void solve()
{
    int ppl;
    cin >> ppl;

    double max = INT_MIN;
    while (ppl--)
    {
        int a, b;
        cin >> a >> b;
        double dist = dis(a, b);
        if (max < dist)
        {
            max = dist;
        }
    }
    double pi = 2*acos(0.0);
    double circum = (2*pi)*max;
    printf("%.6f", circum);
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