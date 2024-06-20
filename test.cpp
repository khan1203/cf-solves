#include <bits/stdc++.h>
using namespace std;

void printSubarrays(int arr[], int n)
{
	for (int i = 0; i < n; ++i)              // i=0
	{
		for (int j = i; j < n; ++j)          // j=0
		{
			for (int k = i; k <= j; ++k)     // k=0
			{
				cout << arr[k]<<" ";		 // 
			}
			cout << "\t";
		}	
	}
}

int main()
{
	int arr[] = {1, 6, 3, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	printSubarrays(arr, n);

	return 0;
}
