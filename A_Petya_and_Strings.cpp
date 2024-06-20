#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len1 = 0, len2 = 0;
    string str1, str2;
    cin >> str1;
    cin >> str2;

    int len = str1.length();

    for (int i = 0; i < len; i++)
    {
        if (str1[i] < 97)
        {
            str1[i] += 32;
            // cout << str1[i];
        }
        if (str2[i] < 97)
        {
            str2[i] += 32;
            // cout << str2[i];
        }
        if (str1[i] == str2[i])
        {
            if (i == len - 1)
            {
                cout << 0 << "\n";
                return 0;
            }
            continue;
        }
        else if (str1[i] > str2[i])
        {
            cout << 1 << "\n";
            return 0;
        }
        else if (str1[i] < str2[i])
        {
            cout << -1 << "\n";
            return 0;
        }
        cout << 0 << "\n";
        return 0;
    }
    return 0;
}