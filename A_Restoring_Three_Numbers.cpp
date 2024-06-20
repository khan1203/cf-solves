#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int a, b, c, d, p, q, r, s;
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    a = (arr[0] + arr[1] - arr[2]) / 2;
    b = (arr[0] - arr[1] + arr[2]) / 2;
    c = (-arr[0] + arr[1] + arr[2]) / 2;

    cout << a << " " << b << " " << c << "\n";

    return 0;
}
