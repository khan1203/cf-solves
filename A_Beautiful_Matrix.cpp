#include <bits/stdc++.h>
using namespace std;

int main()
{

    int index_i, index_j, arr[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                index_i = i;
                index_j = j;
            }
        }
    }

    int coi = 0, coj = 0;
    if (index_i > 2)
    {
        while (index_i > 2)
        {
            index_i--;
            coi++;
        }
    }
    else
    {
        while (index_i < 2)
        {
            index_i++;
            coi++;
        }
    }

    if (index_j > 2)
    {
        while (index_j > 2)
        {
            index_j--;
            coj++;
        }
    }
    else
    {
        while (index_j < 2)
        {
            index_j++;
            coj++;
        }
    }

    cout << coi + coj << "\n";

    return 0;
}