#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr1[n];

    int i = 0;
    while (i < n)
    {
        // cout << "Enter 0 for Easy and 1 for Hard" << endl;
        cin >> arr1[i];
        i++;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr1[i];
    }

    if (sum == 0)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }
}