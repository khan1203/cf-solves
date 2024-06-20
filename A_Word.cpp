#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int len = str.length(), l = 0, s = 0;
    for (int i = 0; i < len; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            l++;
        }
        else
            s++;
    }

    if (s >= l)
    {
        for (int i = 0; i < len; i++)
        {
            if ('A' <= str[i] && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if ('a' <= str[i] && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
    }

    cout<<str<<'\n';

    return 0;
}