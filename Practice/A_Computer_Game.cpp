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

bool vis[105][105];
char grid[105][105];
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {1, 1}, {-1, 0}, {-1, 1}};

bool valid(int i, int j, int col)
{
    if (i < 1 || i > 2 || j < 1 || j > col)
        return false;
    return true;
}
void dfs(int si, int sj, int col)
{
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < dir.size(); i++)
    {
        int ci = si + dir[i].first;
        int cj = sj + dir[i].second;

        if (valid(ci, cj, col) == true && vis[ci][cj] != true && grid[ci][cj] == '0')
            dfs(ci, cj, col);
    }
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int col;
        cin >> col;

        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                cin >> grid[i][j];
            }
        }

        memset(vis, false, sizeof(vis) + 1);

        dfs(1, 1, col);

        if (vis[2][col])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}