// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

const int MAX = 1005;
// int grid[MAX][MAX];
bool board[MAX][MAX];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};

bool valid(int i, int j, int row, int col)
{
    return (i >= 1 && i <= row && j >= 1 && j <= col);
}

void dfs(int si, int sj, int row, int col)
{
    board[si][sj] = true;

    // Explore neighbors
    for (auto [dx, dy] : dir)
    {
        int ci = si + dx;
        int cj = sj + dy;

        if (valid(ci, cj, row, col) && !board[ci][cj])
        {
            dfs(ci, cj, row, col);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    memset(board, false, sizeof(board));

    for (int i = 0; i < 8; i++)
    {
        int DX, DY;
        DX = ax + dir[i].first;
        DY = ay + dir[i].second;
        while (valid(DX, DY, n, n))
        {
            board[DX][DY] = true;
            DX += dir[i].first;
            DY += dir[i].second;
        }
    }

    dfs(bx, by, n, n);

    if (board[cx][cy])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
