//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y, min, max;
    cin>>x>>y;
    if(x<=y){
        cout<<x<<" "<<y<<"\n";
    }
    else{
        cout<<y<<" "<<x<<"\n";
    }
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}