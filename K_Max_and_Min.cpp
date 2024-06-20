#include <iostream>
using namespace std;

int main()
{
    long long int a, b, c, max, min;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            max = a;
            min = c;
        }
        else
        {
            max = a;
            min = b;
        }
    }
    else if (b >= c && b >= a)
    {
        if (a >= c)
        {
            max = b;
            min = c;
        }
        else
        {
            max = b;
            min = a;
        }
    }
    else if (c >= b && c >= a)
    {
        if (b >= a)
        {
            max = c;
            min = a;
        }
        else
        {
            max = c;
            min = b;
        }
    }

    cout << min << " " << max << endl;
}