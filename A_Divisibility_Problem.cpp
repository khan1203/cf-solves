#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll a, b;
    cin >> a >> b;
 
    if(!(a % b)){
        cout << 0 << "\n";
    }
    else{
        cout << (b - a % b) << "\n";
    }
}
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
        solve();
    }
 
return 0;
}