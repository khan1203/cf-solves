#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B, flag=0;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        int temp = i;
        while (temp)
        {
            if ((temp % 10 == 4) || (temp % 10 == 7))
            {
                temp = temp / 10;
            }
            else
                break;
        }
        if (temp == 0)
        {
            cout << i << " ";
            flag++;
        }
    }
    if(!flag)cout<<"-1";
    

    return 0;
}