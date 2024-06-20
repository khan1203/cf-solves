#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch1;

    cin >> ch1;

    if (ch1 > 121)
        cout << 'a' << endl;
    else
    {
        char ch2 = ch1 + 1;
        cout << ch2 << endl;
    }

    return 0;
}