#include <iostream>
using namespace std;

int main()
{
    char x;

    cin >> x;

    if ('a' <= x || x <= 'z')
    {
        char higherCharacter = x - 32;
        cout << higherCharacter << endl;
    }
    else if ('A' <= x || x <= 'Z')
    {
        char lowerCharacter = x + ;
        cout << lowerCharacter << endl;
    }
    else
    {
        cout << "Please input valid character within a-z or A-Z" << endl;
    }

    return 0;
}