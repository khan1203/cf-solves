//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;

    if(a>b)cout<<">"<<"\n";
    else if(a<b)cout<<"<"<<"\n";
    else if(a==b)cout<<"=="<<"\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}