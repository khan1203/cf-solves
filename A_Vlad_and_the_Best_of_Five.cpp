#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    int t;
    cin >> t;

    while (t--)
    {
        cin>>str;
        int coa = 0, cob = 0;
        for (int i = 0; i < 5; i++)
        {
            
            if (str[i] == 'A')
            {
                coa++;
            }
            else
                cob++;
        }

        if (coa > cob)
        {
            cout << 'A' << "\n";
        }
        else
            cout << 'B' << "\n";
    }

    return 0;
}