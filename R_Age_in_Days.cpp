#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int year = N / 365;
    int month = ((N - (365 * year))) / 30;
    int days = (N - (365 * year) - (30 * month));

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days" << endl;
}