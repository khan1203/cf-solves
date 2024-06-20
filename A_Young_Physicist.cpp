//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    ll sumx=0, sumy=0, sumz=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;

        sumx+=x;
        sumy+=y;
        sumz+=z;
    }

    if(sumx == 0 && sumy ==0 && sumz==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}