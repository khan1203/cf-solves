// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int cnt[27] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        cnt[str[i] - 'a']++;
    }

    char ch='a';
    for (int i = 0; i < 27; i++)
    {
        if(cnt[i]!=0){
            cout<<ch<<" : "<<cnt[i]<<"\n";
        }   
        ch++;         
    }
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