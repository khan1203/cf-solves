#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int co1 = 0, co2 = 0;
    string s;
    cin >> s;

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            co1++;
        }
        else if ( co1 < 6)
        {
            co1 = 0;
        }
        else break;
    }

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            co2++;
        }
        else if ( co2 < 6)
        {
            co2 = 0;
        }
        else break;
    }

    if (co1 >= 6 || co2 >= 6)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}

// ((s[i] == '1' && s[i + 1] == '0') || (s[i] == '0' && s[i + 1] == '1')) &&