//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i]>1){
            cout<<"NO\n";
            return;
        }
    }
    
    cout<<"YES\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}
