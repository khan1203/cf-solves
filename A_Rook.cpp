#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        string s1;
        cin >> s1;
        i++;

        for (int i = 1; i < 9; i++)
        {
            for (char j = 'a'; j < 'i'; j++)
            {
                if (j == (s1[0]) || i == s1[1]-'0')
                {
                    continue;
                }
                cout << j << s1[1] << endl;
            }
        }
    }

    return 0;
}

            // if (i == (s1[1] - '0'))
            // {
            //     continue;
            // }
            // cout << "d" << i << endl;