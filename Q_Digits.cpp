#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, num;

    cin >> N;

    while (N--)
    {
        cin >> num; // 1200

        int len = num == 0 ? 1 : static_cast<int>(log10(abs(num))) + 1;

        while (len)
        {
            int lastD1 = num % 10; // 7
            num = num / 10;
            cout << lastD1 <<" ";
            len--;

        }
        cout<<"\n";
    }

    return 0;
}