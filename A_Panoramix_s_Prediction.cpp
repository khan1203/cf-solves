// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int x)
{
    if (x % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                return false;
        }
    }
    return true;
}

int solve(int a)
{
    while(1){
        a++;
        if(isPrime(a)){
            // cout<<a<<"\n";
            return a;
            break;
        }
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    if(solve(a)==b){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}