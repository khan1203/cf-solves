#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, temp, co = 1;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (co < n)
    {
        for (int j = 0; j < n - co; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        co++;
    }

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        cout << "Lucky"
             << "\n";
    }
    else
        cout << "Unlucky"
             << "\n";

    return 0;
}