#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n, co=0;
    cin >> n;
    char str[n];
    int count[27] = {0};
    string alpha = "0abcdefghijklmnopqrstuvwxyz";

    for(int i=0; i<n; i++){
        cin>>str[i];
    }

    for (int i = 0; i < n; i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] += 32;
        }

        for (int j = 1; j <= 26; j++)
        {
            if (str[i] == alpha[j])
            {
                count[j]++;
            }
        }
    }

    for(int j=1; j<=26; j++){
        // cout<<count[j];
        if(count[j]>0)co++;
    }

    // cout<<"\n"<<co<<"\n";

    if(co==26) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

    return 0;
}