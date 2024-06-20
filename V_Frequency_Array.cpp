//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,s;
    cin>>s>>n;

    int arr[s];
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }

    int cnt[n+9]={0};
    for(int i=0; i<s; i++){
        cnt[arr[i]]++;
    }

    for(int i=1; i<=n; i++){
        cout<<cnt[i]<<"\n";
    }
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}