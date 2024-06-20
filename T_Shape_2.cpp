#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    // for(int i=0; i<=n; i++){
    //     for(int k=i; k<=n+1; k++){
    //         cout<<"* ";
    //     }
    //     for(int j=1; j<=n-1; j++){
    //         cout<<" ";
    //     }
    //     cout<<"\n";
    // }

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1; col++){
            cout<<"*";
        }

    cout<<"\n";
    }

    return 0;
}