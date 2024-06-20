#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, co=0;
    cin >> n;
    int arr3[100]={};

    int x;
    cin >> x;
    int arr1[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr1[i];
        arr3[arr1[i]]++;
    }

    int y;
    cin >> y;
    int arr2[y];

    for (int i = 0; i < y; i++)
    {
        cin >> arr2[i];
        arr3[arr2[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(arr3[i]>0) co++;
    }

    if(co==n) cout<<"I become the guy."<<"\n";
    else cout<<"Oh, my keyboard!"<<"\n";

    return 0;
}