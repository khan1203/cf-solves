//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll interesting(ll x){
    int last_digit = x%10;
    ll res = x/10;

    if(last_digit==9){
        res+=1;
    }

    return res;
}

void solve(){
    ll n;
    cin>>n;

    cout<<interesting(n)<<"\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}