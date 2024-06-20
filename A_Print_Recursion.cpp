//by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int x){
    if(x==0) return;
    cout<<"I love Recursion\n";
    solve(x-1);
}

int main(){

    int n;
    cin>>n;
    solve(n);


return 0;
}