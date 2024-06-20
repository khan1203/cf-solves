//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, max = INT_MIN;
    cin>>n;

    int arr[n+9];
    for(int i=0; i<n; i++){
        cin>>arr[i];

        // if(arr[i]<min){
        //     min=arr[i];
        // }
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int sum=0;
    for(int i=0; i<n; i++){
        int add = max-arr[i];
        sum+=add;
    }

    cout<<sum<<"\n";
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}