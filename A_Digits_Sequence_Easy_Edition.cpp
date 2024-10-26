// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

int len = 10000;

string strLine()
{
    string str;
    for (int i = 1; i <= len; i++)
    {
        str += to_string(i);
    }

    return str;
}

int main()
{
    string str = strLine();

    int k;
    cin >> k;

    cout << str[k - 1] << endl;

    return 0;
}