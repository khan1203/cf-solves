//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int r,b;
    cin>>r>>b;

    int fasion_d = min(r,b);
    int rest_d = 0.5*(max(r,b) - fasion_d);

    cout<<fasion_d<<" "<<rest_d<<"\n";    
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}