#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int co = 0;
    while (n--)
    {
        string str;
        cin >> str;

        if (str[1] == '+')
        {
            co++;
        }
        else if (str[1] == '-')
        {
            co--;
        }
    }

    cout << co << "\n";

    return 0;
}