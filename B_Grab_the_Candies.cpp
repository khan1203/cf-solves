#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;

        int candi[n];
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> candi[i];

            if ((candi[i]) % 2 == 0)
            {
                even += candi[i];
            }
            else
            {
                odd += candi[i];
            }
        }

        // cout<<even<<" "<<odd<<"\n";

        if (even > odd)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}