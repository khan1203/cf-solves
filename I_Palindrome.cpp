// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str;
    cin>>str;
    int li=str.size()-1;

    for(int i=0, j=li; i<j; i++, j--){
        if(str[i]!=str[j]){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";

}

int main()
{
    solve();
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    return 0;
}