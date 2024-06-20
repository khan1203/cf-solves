#include <iostream>
#include <math.h>

int main()
{
    using namespace std;

    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (pow(A, B) > pow(C, D))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
