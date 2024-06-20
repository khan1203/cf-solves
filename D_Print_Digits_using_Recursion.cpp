//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void rec(int x){
    //base case
    if(x==0)return;

    rec(x/10);
    int last_digit=x%10;
    cout<<last_digit;
    if(x>0){
        cout<<" ";
    }
}

void solve(){
    int n;
    cin>>n;

    rec(n);
    cout<<"\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}