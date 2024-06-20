#include <bits/stdc++.h>
using namespace std;

int number = 48;

class Number {

}


int main(){

    Number n1;

    long long a,b,c;
    long long int d;

    cin>>a>>b>>c>>d;

         if(a+b-c ==d){cout<<"YES"<<endl;}
    else if(a+b*c ==d){cout<<"YES"<<endl;}
    else if(a-b+c ==d){cout<<"YES"<<endl;}
    else if(a-b*c ==d){cout<<"YES"<<endl;}
    else if(a*b+c ==d){cout<<"YES"<<endl;}
    else if(a*b-c ==d){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

    return 0;
}