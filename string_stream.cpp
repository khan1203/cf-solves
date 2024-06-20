//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

void solve(){
    int x;
    cin>>x;

    string s;
    cin.ignore();
    getline(cin, s);

    stringstream ss(s);
    string word;
    // while(ss>>word){
    //     cout<<word<<endl;
    // }

    ss>>word;
    cout<<word<<endl;
    ss>>word;
    cout<<word<<endl;

    cout<<s<<endl;
}

int main(){

    // solve();

    int t;
    cin>>t;
    while(t--){ solve(); }
return 0;
}