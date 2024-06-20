#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        if (str[0] == 'Y' || str[0] == 'y')
        {
            if (str[1] == 'E' || str[1] == 'e')
            {
                if (str[2] == 'S' || str[2] == 's')
                {
                    cout << "YES" << '\n';
                }
                else
                    cout << "NO"
                         << "\n";
            }
            else
                cout << "NO"
                     << "\n";
        }
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}