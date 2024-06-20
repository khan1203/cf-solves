// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

void solve()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        for(int i=0; i<word.length(); i++){
            if(word[i]!=',' && word[i]!='.' && word[i]!='!' && word[i]!='?'){
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
}

int main()
{

    solve();

    // int t;
    // cin>>t;
    // while(t--){ solve(); }
    return 0;
}