#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll n;
    cin >> n;
    int i = 20, d = 12, o = 8, c = 6, t = 4, sum = 0;

    while (n--)
    {
        string str;
        cin >> str;
        if (str == "Icosahedron")
            sum += 20;
        else if (str == "Dodecahedron")
            sum += 12;
        else if (str == "Octahedron")
            sum += 8;
        else if (str == "Cube")
            sum += 6;
        else if (str == "Tetrahedron")
            sum += 4;
    }

    cout<<sum<<"\n";

    return 0;
}