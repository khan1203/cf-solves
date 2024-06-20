#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string str1 = "I hate ";
    string str2 = "I love ";
    string result;

    if (n == 1)
    {
        cout << "I hate it"
             << "\n";
        return 0;
    }

    result = "I hate ";
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            result = result + "that " + str1;
        }
        else
            result = result + "that " + str2;
    }

    cout << result << "it";
    return 0;
}