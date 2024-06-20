#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0;
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'A')
                {
                    a++;
                }
                else if (arr[i][j] == 'B')
                {
                    b++;
                }
                else if (arr[i][j] == 'C')
                {
                    c++;
                }
            }
        }
        if (a == 2)
        {
            cout << "A"
                 << "\n";
        }
        if (b == 2)
        {
            cout << "B"
                 << "\n";
        }
        if (c == 2)
        {
            cout << "C"
                 << "\n";
        }
    }
}
