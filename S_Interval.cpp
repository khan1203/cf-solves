#include <iostream>
using namespace std;

int main()
{
    double N;
    cin >> N;

    if (0.000000 <= N && N <= 25.000000)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (25.000000 < N && N <= 50.000000)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (50.000000 < N && N <= 75.000000)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (75.000000 < N && N <= 100.000000)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }
}