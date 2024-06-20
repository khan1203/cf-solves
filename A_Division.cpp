#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int rate;
        cin>>rate;
        if(rate<=1399) cout<<"Division "<<4<<"\n";
        else if(1400<=rate && rate<=1599) cout<<"Division "<<3<<"\n";
        else if(1600<=rate && rate<=1899) cout<<"Division "<<2<<"\n";
        else if(1900<=rate) cout<<"Division "<<1<<"\n";
    }

    return 0;
}