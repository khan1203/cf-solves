//by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int P = 1e9 + 7;

void solve(){
     int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int S = 0, sum = 0;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        cur += a[i];
        cur = max(cur, 0);
        S = max(S, cur);
    }
    sum = (sum % P + P) % P;
    S = S % P;
    int t = 1;
    for (int i = 0; i < k; i++) {
        t = t * 2 % P;
    }
    int ans = (sum + S * t - S + P) % P;
    cout << ans << '\n';
}

int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}