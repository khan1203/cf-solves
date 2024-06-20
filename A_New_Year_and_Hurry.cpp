#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int time, n, p, solve_time = 0, co = 0;
    cin >> p >> n;

    for (int i = 1; i <= p; i++)
    {
        solve_time += 5 * i;
    }

    time = n + solve_time;
    for (int i = p; i > 0; i--)
    {
        if (time > 240)
        {
            time -= (5 * i);
            co++;
        }
        else
            break;
    }

    cout << p - co << "\n";

    return 0;
}