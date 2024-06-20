#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            if (str[i - 3] != 'W' || str[i - 2] != 'U' || str[i - 1] != 'B')
            {
                cout << " "; 
            }
            i += 2;
            continue;
        }
        else
        {
            cout << str[i];
        }
    }

    return 0;
}