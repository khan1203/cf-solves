#include <bits/stdc++.h>
using namespace std;

int main(){
    float x; float p; float z;

    cin>>x>>p;

    z = p/(1-(x/100));

    cout<<fixed<<setprecision(2)<<z<<endl;

    return 0;
}