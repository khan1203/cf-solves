#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cost, taha, banana, dam = 0, hawlat = 0;
    cin >> cost >> taha >> banana;

    for (int i = 1; i <= banana; i++)
    {
        dam += i * cost;
    }

    if (dam > taha)
    {
        hawlat = dam - taha;
        cout << hawlat << "\n";
    }
    else
        cout << 0 << '\n';

    return 0;
}