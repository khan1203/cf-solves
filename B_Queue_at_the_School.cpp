#include <bits/stdc++.h>
using namespace std;

int main()
{

    int c, t;
    cin >> c >> t;

    char str[c];
    for (int i = 0; i < c; i++)
        cin >> str[i];

    while (t--)
    {
        for (int i = 0; i < c; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                char temp = str[i + 1];
                str[i + 1] = str[i];
                str[i] = temp;
                i++;
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << str[i];
    }
    return 0;
}