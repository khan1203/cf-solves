#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    string str, str2 = "0abcdefghijklmnopqrstuvwxyz";
    int arr[27] = {0}, co = 0;
    getline(cin, str);

    for (int i = 1; i < str.length() - 1; i += 3)
    {
        // cout << str[i];
        for (int j = 1; j < 27; j++)
        {
            if (str[i] == str2[j])
            {
                arr[j]++;
                break;
            }
        }
    }
    // cout << endl;
    for (int i = 1; i < 27; i++)
    {
        // cout << arr[i];
        if (arr[i] > 0)
            co++;
    }

    cout << co << "\n";

    return 0;
}