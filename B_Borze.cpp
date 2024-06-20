//by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
}

int main(){

    string str;
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='.'){
            cout<<0;
        }
        else if(str[i]=='-' && str[i+1]=='.'){
            cout<<1;
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            cout<<2;
            i++;
        }
    }

    return 0;
}