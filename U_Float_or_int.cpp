#include <iostream>
using namespace std;

int main()
{
    int A, S, B;
    cin >> A >> S >> B;

    if (S == '=')
    {
        if (A == B)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (S == '>')
    {
        if (A > B)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else if (S == '<')
    {
        if (A < B)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else
        cout << "Invalid Input" << endl;
}