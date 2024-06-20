//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, min=INT_MAX, max=INT_MIN;
    cin>>n;

    int arr[n+9];
    for(int i=1; i<=n; i++){
        cin>>arr[i];

        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<min<<" "<<max<<"\n";
}

int main(){

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
return 0;
}