//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    // vector<int> vec(10);
    int arr[10]={0};

    for(int i=9, j=0; i>0; i--){
        if(n>i){
            n=n-i;
            arr[j]=i;
            j++;
        }
        else{
            arr[j]=n;
            break;
        }
    }

    for(int i=9; i>=0; i--){
        if(arr[i]>0){
            cout<<arr[i];
        }
    }
    cout<<"\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}