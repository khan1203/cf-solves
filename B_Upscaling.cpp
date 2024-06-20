#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string str1 = "";
        string str2 = "";
        for (long long i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                str1 += "##";
                str2 += "..";
            }
            else
            {
                str1 += "..";
                str2 += "##";
            }
        }
        for (long long i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                cout << str1 << endl;
                cout << str1 << endl;
            }
            else
            {
                cout << str2 << endl;
                cout << str2 << endl;
            }
        }
    }
    return 0;
}