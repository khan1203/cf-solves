#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int findUniqueDigit(int x, int y, int z)
{
    if (x != y && x != z)
        cout << x << endl;
    else if (x == y && x != z)
        cout << z << endl;
    else if (x != y && x == z)
        cout << y << endl;
    else cout<<"Invalid Input!!"<<endl;
}

int main()
{
    int t, a, b, c;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;

        int result = findUniqueDigit(a,b,c);
    }
}