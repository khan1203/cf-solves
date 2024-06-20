#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r, co = 0;
    cin >> r;

    while (r--)
    {
        int ppl, cap;
        cin >> ppl >> cap;

        if (cap - ppl >= 2)
        {
            co++;
        }
    }
    cout << co << "\n";

    return 0;
}