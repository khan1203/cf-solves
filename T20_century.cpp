//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

void solve(){
    int r, max=0;
    cin>>r;
    int arr[r];
    for(int i=0; i<r; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max<<endl;
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}