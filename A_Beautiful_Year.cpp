#include <bits/stdc++.h>
using namespace std;

bool isDistinctDigit(int year)
{
    int num[10] = {0};

    while (year)
    {
        int digit = year % 10;

        if (num[digit])
        {
            return false;
        }

        num[digit] = true;
        year /= 10;
    }

    return true;
}

int main()
{

    int flag = 0;
    int year;

    cin >> year;

    year++;

    while (year)
    {

        if (isDistinctDigit(year))
        {
            cout << year;
            flag++;
        }
        if (flag)
        {
            break;
        }
        year++;
    }

    return 0;
}