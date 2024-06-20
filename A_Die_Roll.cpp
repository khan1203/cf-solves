#include <bits/stdc++.h>
#define ll long long
using namespace std;

int

int main()
{
    int a, b;

    cin >> a >> b;

    int lob = 7 - max(a, b);

    float prob = (float)lob / 6;

    cout << prob;

    return 0;
}