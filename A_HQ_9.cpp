#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int co = 0;
    string p;
    cin >> p;

    for (int i = 0; i <= p.length(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            co++;
        }
    }
    if (co)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}