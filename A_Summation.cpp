#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n; 
    long long arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int j=0; j<n; j++){
        sum += arr[j];
    }

    cout<<abs(sum);



    return 0;
}