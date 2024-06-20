// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int arr[6];
    string str;
    cin >> str;

    for (int i = 0; i < 6; i++)
    {
        arr[i] = static_cast<int>(str[i] - 48);
    }

    int sum1=0, sum2=0;
    for(int i=0, j=3; i<3, j<6; i++, j++){
        sum1+=arr[i];
        sum2+=arr[j];
    }

    if(sum1==sum2){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<"\n";
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}