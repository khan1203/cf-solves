// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;

    int i = 0;
    while (1)
    {
        if (str1[i] != str2[i])
        {
            if(str1[i]<str2[i]){
                cout<<str1<<"\n";
                break;
            }
            else{
                cout<<str2<<"\n";
                break;
            }
        }

        if(str1[i]=='\0' && str2[i]!='\0'){
            cout<<str1<<"\n";
            break;
        }
        else if(str1[i]!='\0' && str2[i]=='\0'){
            cout<<str2<<"\n";
            break;
        }
        i++;
    }
}

int main()
{
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}