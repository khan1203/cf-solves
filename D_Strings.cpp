// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str1, str2, str;
    cin >> str1 >> str2;

    int len1 = str1.size();
    int len2 = str2.size();

    cout<<len1<<" "<<len2<<"\n";

    str = str1+str2;

    cout<<str<<"\n";

    swap(str1[0],str2[0]);
    cout<<str1<<" "<<str2<<"\n";
}

int main()
{
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}