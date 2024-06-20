#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int arr1[4],co=0;

    for(int i=0; i<4; i++)
    {
        cin>>arr1[i];
    }

    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(arr1[i]== arr1[j]){
                co++;
            }
        }
    }

    if(co==6){co=3;}
    else if(co==3){co=2;}
    
    cout<<co<<"\n";
    

    return 0;
}