//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int  arr1[n]={0};
    int max= INT_MIN;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
        

    }
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}