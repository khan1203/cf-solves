#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, temp;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int indexMin = -1;
    int indexMax = -1;
    int min_num = INT_MAX;
    int max_num = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_num)
        {
            min_num = arr[i];
            indexMin = i;
        }

        if (arr[i] > max_num)
        {
            max_num = arr[i];
            indexMax = i;
        }
    }

    swap(arr[indexMin], arr[indexMax]);

    // for (int i = 0; i < n; i++)
    // {
    //     if (i == indexMin)
    //     {
    //         temp = arr[i];
    //         arr[i] = arr[indexMax];
    //     }

    //     if (i == indexMax)
    //     {
    //         arr[i] = temp;
    //     }

    //     cout<<arr[i]<<" ";
    // }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}