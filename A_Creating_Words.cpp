//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;

    swap(s1[0], s2[0]);

    cout<<s1<<" "<<s2<<"\n";
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}