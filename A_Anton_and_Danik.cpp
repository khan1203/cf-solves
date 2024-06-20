#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    long long a = 0, d = 0;
    string str;
    cin >> str;

    for (long long i = 0; i < t; i++)
    {
        if (str[i] == 'A')
            a++;
        else if (str[i] == 'D')
            d++;
    }

    if (a > d)
        cout << "Anton"
             << "\n";
    else if (d > a)
        cout << "Danik"
             << "\n";
    else
        cout << "Friendship"
             << "\n";

    return 0;
}