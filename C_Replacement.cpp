#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, p;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p > 0)
        {
            arr[i] = 1;
        }
        else if (p == 0)
        {
            arr[i]=0;
        }
        else arr[i]=2;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}