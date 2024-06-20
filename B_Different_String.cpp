// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int isPlaindrome(string str, int len)
{

    for (int i = 0, j = len; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    string str;
    cin >> str;

    int len = str.length() - 1;

    // if (!isPlaindrome(str, len))
    // {
    //     cout << "YES\n";
    //     for (int j = len; j >= 0; j--)
    //     {
    //         cout << str[j];
    //     }
    //     cout << "\n";
    //     return;
    // }

    // str[str.length()]=str[str.length()-1];
    // cout<<str[str.length()]<<"\n";

    for(int i=0; i<str.length()-1; i++){
        if(str[i]!=str[i+1]){
            cout<<"YES\n";
            if(isPlaindrome(str,len)){
                char temp=str[0];
                str[0]=str[len-1];
                str[len-1]=temp;
            }
            for(int j=str.length()-1; j>=0; j--){
                cout<<str[j];
            }
            cout<<"\n";
            return;
        }
    }

    cout<<"NO\n";
}

int main()
{

    // solve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}