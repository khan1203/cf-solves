#include <iostream>
using namespace std;

int main()
{
    int p, sum;
    cin >> p >> sum;
    int co[sum + 1];

    co[0] = 1;

    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            co[i] += co[i - j];
        }
    }

    cout << co[sum] << "\n";

    return 0;
}