//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2*acos(0.0)
using namespace std;

void Fast_io(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
}

bool isPerfectSqr(ll n){
    if(n<0) return false;

    ll sqrRoot = static_cast<ll>(sqrt(n));
    return (sqrRoot*sqrRoot == n);
}

void solve(){
    // Fast_io();
    ll n;
    cin>>n;

    // vector<int> arr(n);
    ll sum=0;
    for(int i=0; i<n; i++){
        ll x;
        cin>>x;
        // arr.push_back(x);
        sum+=x;
    }

    if(isPerfectSqr(sum)){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }




}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}