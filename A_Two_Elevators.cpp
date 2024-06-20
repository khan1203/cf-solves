//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int el1 = a-1;
    int el2 = abs(b-c)+abs(c-1);

    if(el1<el2){
        cout<<1<<"\n";
    }
    else if(el2<el1){
        cout<<2<<"\n";
    }
    else{
        cout<<3<<"\n";
    }
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}