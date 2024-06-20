#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2;

    while (1)
    {
        cin >> n1 >> n2;

        int large = n1 > n2 ? n1 : n2;
        int small = n2 > n1 ? n1 : n2;

        int sum = 0;
        
        if (n1 <= 0 || n2 <= 0)
        {
            break;
        }

        for (int i = small; i <= large; i++)
        {
            sum += i;
            cout << i << " ";
        }

        cout << "sum =" << sum << "\n";
    }

    return 0;
}