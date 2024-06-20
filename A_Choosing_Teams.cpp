//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    int co=0, team=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(5-x>=k){
            co++;
        }
    }

    team = co/3;
    cout<<team<<'\n';
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}