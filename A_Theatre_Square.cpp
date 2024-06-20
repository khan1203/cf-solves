#include <bits/stdc++.h>
using namespace std;

int main()
{

    double l, b, a;

    cin >> l >> b >> a;

    double row = ceil(l / a);
    // cout<<row<<"\n";
    double col = ceil(b / a);

    long long stones = row * col;
    cout << stones << "\n";

    return 0;
}