// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

const int MAX = 1005;
int grid[MAX][MAX];
bool vis[MAX][MAX];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j, int row, int col)
{
    return (i >= 0 && i < row && j >= 0 && j < col);
}

int dfs(int si, int sj, int row, int col)
{
    int sum = grid[si][sj];
    vis[si][sj] = true;

    // Explore neighbors
    for (auto [dx, dy] : dir)
    {
        int ci = si + dx;
        int cj = sj + dy;

        if (valid(ci, cj, row, col) && !vis[ci][cj] && grid[ci][cj] > 0)
        {
            sum += dfs(ci, cj, row, col);
        }
    }

    return sum;
}

int main()
{
    Fast_io();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int row, col;
        cin >> row >> col;

        memset(vis, false, sizeof(vis));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }

        int maxVolume = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                // If the cell is part of a lake and hasn't been visited yet
                if (grid[i][j] > 0 && !vis[i][j])
                {
                    int lakeVolume = dfs(i, j, row, col);
                    maxVolume = max(maxVolume, lakeVolume);
                }
            }
        }

        cout << maxVolume << endl;
    }

    return 0;
}
