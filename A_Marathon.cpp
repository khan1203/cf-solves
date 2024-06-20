//by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int arr[4], co=0;

    for(int i=0; i<4; i++){
        cin>>arr[i];

        if(i>0){
            if(arr[i]>arr[0]){
                co++;
            }
        }
    }
    cout<<co<<"\n";
}

int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}