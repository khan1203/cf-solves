#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
    float m, n;
    // scanf("%d", A);
    cin >> m >> n;

    float p = m / n;
    int q = m / n;
    float r = p - q;

    // cout << p << " " << q << " " << r << endl;

    if (r >= 0.5)
    {
        cout << "floor " << m << " / " << n << " = " << q << endl;
        cout << "ceil " << m << " / " << n << " = " << q + 1 << endl;
        cout << "round " << m << " / " << n << " = " << q + 1 << endl;
    }
    else if (r == 0)
    {
        cout << "floor " << m << " / " << n << " = " << q << endl;
        cout << "ceil " << m << " / " << n << " = " << q << endl;
        cout << "round " << m << " / " << n << " = " << q << endl;
    }
    else
    {
        cout << "floor " << m << " / " << n << " = " << q << endl;
        cout << "ceil " << m << " / " << n << " = " << q + 1 << endl;
        cout << "round " << m << " / " << n << " = " << q << endl;
    }
}