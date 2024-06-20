//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[2*n], odd = 0, even = 0;
    for(int i=0; i<2*n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(even==n){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}