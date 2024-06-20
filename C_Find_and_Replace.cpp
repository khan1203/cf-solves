#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        char str[size];

        for (int i = 0, j=2; i < size; i++, j+2)
        {
            if (str[i] == str[i + 1])
            {
                cout << "NO"
                     << "\n";
                break;
            }
            if (str[i] == str[i + j])
            {
                cout << "NO"
                     << "\n";
                break;
            }
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}