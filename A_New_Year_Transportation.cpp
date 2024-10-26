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
const int maxN = 3 * (1e4 + 3);
vector<int> v[maxN];
bool vis[maxN];
void dfs(int src)
{
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
            dfs(child);
    }
}

int main()
{

    int n, des;
    cin >> n >> des;

    vector<int> a(n, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        int b = i + a[i];
        v[i].push_back(b);
    }

    dfs(1);

    if (vis[des])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}