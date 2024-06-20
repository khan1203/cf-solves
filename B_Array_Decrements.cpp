//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, a[n], b[n], diff;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        cin>>b[i];

        if(b[i]!=0 && (a[i]-b[i])>0){
            diff=a[i]-b[i];
        }
    }

    for(int i=1; i<=n; i++){
        if((a[i]-b[i])<0){
            cout<<"NO"<<"\n";
            return;
        }
        
        if(b[i]!=0){
            // diff=a[i]-b[i];
            if(a[i] - b[i] != diff){
                cout"<<'\n';
                return;
            }
            else{
                cout<<"NO"<<"\n";
                return;
            }
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