#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        for(int i=a; i<=b; i++)
        {
           while(i!=0)
           {
                int digit1 = i%10;
                i=i/10;
                int digit2= i%10; 
                int maximum = max(digit1, digit2);
                int minimum = min(digit1, digit2);
           }
        }
    }

    return 0;
}