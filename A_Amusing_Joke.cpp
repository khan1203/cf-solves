#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    string str1, str2, str3, str4 = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> str1 >> str2 >> str3;

    int arr1[27] = {0}, arr2[27] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 1; j < 27; j++)
        {
            if (str1[i] == str4[j])
            {
                arr1[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < str2.length(); i++)
    {
        for (int j = 1; j < 27; j++)
        {
            if (str2[i] == str4[j])
            {
                arr1[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < str3.length(); i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (str3[i] == str4[j])
            {
                arr2[j]++;
                break;
            }
        }
    }

    int co = 0;
    for (int i = 1; i < 27; i++)
    {
        if (arr1[i] == arr2[i])
        {
            co++;
        }
    }

    // cout << co << "\n";

    if (co == 26)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}