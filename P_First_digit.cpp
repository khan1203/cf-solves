#include <iostream>
using namespace std;

int main()
{
    int n, firstDigit;
    cin >> n;

    firstDigit = n / 1000;

    if (firstDigit % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}