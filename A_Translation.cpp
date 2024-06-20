#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int size = str1.size();

    int left = 0, right = size - 1;
    while (left < right)
    {
        swap(str1[left], str1[right]);
        left++;
        right--;
    }

    if (str1 == str2)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}