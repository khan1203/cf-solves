#include <bits/stdc++.h>
using namespace std;

int renewArray(int size, int arr[])
{
    int i = 0;
    while ((arr[i] % 2 != 0) && (i<size)){
        arr[i]/=2;
        i++;
    }

    return ;
    
    return 0;
}

int main()
{

    int s, rep = 0;
    cin >> s;
    int arr1[s];

    for(int i=0; i<s; i++){
        cin>>arr1[i];
    }

    while(renewArray(s, arr1)){
        rep++;
    }
    cout<<rep<<"\n";

    return 0;
}