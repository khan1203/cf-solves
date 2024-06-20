// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    int row, col;
    cin >> row >> col;

    char v[row+9][col+9];
    int max_cnt = 0, x=0;
    for (int i = 1; i <= row; i++)
    {
        int co = 0;
        for (int j = 1; j <= col; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == '#')
            {
                co++;
            }
        }
        if (co > max_cnt)
        {
            max_cnt = co;
            x=i;
        }
    }

    int init_y = 0;
    for (int i = 1; i <= col; i++)
    {
        if (v[x][i] == '#')
        {
            init_y = i;
            break;
        }
    }

    int final_y = ceil(max_cnt / 2) + init_y;
    printf("%d %d\n", x, final_y);
}

int main()
{

    // solve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}