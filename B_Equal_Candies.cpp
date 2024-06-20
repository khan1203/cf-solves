//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n+2];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    int min = INT_MAX;
    for(int i=1; i<=n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    int sum=0;
    for(int i=1; i<=n; i++){
        if(arr[i]>min){
            sum+=(arr[i]-min);
        }
    }

    cout<<sum<<"\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}