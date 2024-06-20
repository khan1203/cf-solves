#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;

    cin >> N;

    int lastDigit = N % 10;

    int temp = N;

    while (temp >= 10)
    {
        temp /= 10;
    }

    int firstDigit = temp;
    if ((lastDigit % firstDigit == 0)||(firstDigit%lastDigit==0)){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;

        return 0;
}