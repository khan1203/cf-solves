#include <iostream>
using namespace std;

int main()
{
    int A, B, C, result;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    if (S == '+')
    {
        result = A + B;
        if (result == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    else if (S == '-')
    {
        result = A-B;
        if (result == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    else if (S == '*')
    {
        result =A*B;
        if (result == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    else
    {
        cout << "Please enter valid input" << endl;
    }

    return 0;
}