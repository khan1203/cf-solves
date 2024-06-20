#include <bits/stdc++.h>
using namespace std;

int main(){

    double n, k, a;
    cin>>n>>k>>a;

    void result = (n*k)/a;
    // cout<<result<<endl;

    if(typeid(result)==typeid(int)){cout<<"int"<<endl;}
    else if(typeid(result)==typeid(long long)){cout<<"long long"<<endl;}
    else if(typeid(result)==typeid(double)){cout<<"double"<<endl;}



    return 0;
}