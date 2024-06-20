#include <iostream>
using namespace std;

int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            cout << c << endl;
            cout << b << endl;
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
            cout << c << endl;
            cout << a << endl;
        }
    }
    else if (b >= c && b >= a)
    {
        if (c >= a)
        {
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
        }
    }
    else if (c >= b && c >= a)
    {
        if (b >= a)
        {
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
        }
    }

    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}