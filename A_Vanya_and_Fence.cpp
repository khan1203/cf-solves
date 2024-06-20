#include <bits/stdc++.h>
using namespace std;

int main()
{

    int f, h, w = 0;

    cin >> f >> h;
    int fr[f];

    for (int i = 0; i < f; i++)
    {
        cin >> fr[i];

        if (fr[i] <= h)
            w++;
        else if (fr[i] > h)
            w += 2;
    }

    cout << w << "\n";

    return 0;
}