#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, p = 0, cap = 0;
    cin >> n;

    while (n--)
    {
        int o, i;
        cin >> o >> i;

        p -= o;
        p += i;

        if (p > cap)
            cap = p;
    }

    cout << cap << "\n";
    return 0;
}