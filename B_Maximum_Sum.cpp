// by Khan Muhammad Rifat (CSE, BUBT)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        int p1 = 0;
        int p2 = n - 1;

        for (int i = 0; i < k; i++)
        {
            if (arr[p1] + arr[p1 + 1] > arr[p2])
            {
                p2--;
            }
            else
            {
                p1 += 2;
            }
        }

        ll sum = 0;
        for (int i = p1; i <= p2; i++)
        {
            // cout << arr[i] << " ";
            sum += arr[i];
        }

        cout << sum << "\n";
    }

    return 0;
}

int main()
{
    // optimize();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n), ans(n + 1);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            ans[i + 1] = ans[i] + v[i];
        }

        ll mxsum = 0;
        for (int i = 0; i <= k; i++)
        {
            mxsum = max(mxsum, ans[n - i] - ans[2 * (k - i)]);
        }
        cout << mxsum << endl;
    }

    return 0;
}

/*
const int P = 1e9 + 7;

void solve(){
     int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int S = 0, sum = 0;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
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
*/