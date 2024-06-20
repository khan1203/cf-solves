//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

void solve(){
    int x,y,t;

    cin>>x>>y>>t;

    if(t/x==0)cout<<"YES\n";
    else if(t/y==0)cout<<"YES\n";
    else if((t/x)/y==0)cout<<"YES\n";
    else if((t/y)/x==0)cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}