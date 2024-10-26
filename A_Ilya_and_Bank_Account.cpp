// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

using namespace std;

int max_acc_balance(int n)
{
    int op1 = n;

    int op2 = n / 10;

    int op3 = (n / 100) * 10 + (n % 10);

    return max(op1, max(op2, op3));
}

int main()
{
    int n;
    cin >> n;

    int res = max_acc_balance(n);
    cout << res << endl;

    return 0;
}
