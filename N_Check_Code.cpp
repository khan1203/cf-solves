#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int l = a + b + 1;
    char str[l];

    for (int i = 0; i < l; i++)
    {
        cin >> str[i];
    }

    if (str[a] == '-')
    {
        for (int i = 0; i < l; i++)
        {
            if (i == a)
            {
                continue;
            }
            if (isdigit(str[i]))
            {
                continue;
            }
            else{
                cout << "No"
                     << "\n";
                return 0;
            }
        }
        cout << "Yes"
             << "\n";
    }
    else cout<<"No"<<"\n";
    return 0;
}