#include <bits/stdc++.h>
using namespace std;

int main()
{
    int co = 0;
    string num1, num2;
    cin >> num1 >> num2;

    int len = num1.length();
    char arr[len];

    for (int i = 0; i < len; i++)
    {
        if (num1[i] != num2[i])
        {
            arr[i]='1';
        }
        else arr[i]='0';
    }

    for(int i=0; i<len; i++)
    {
        cout<<arr[i];
    }

    return 0;
}