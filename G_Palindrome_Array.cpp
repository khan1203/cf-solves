#include <iostream>
using namespace std;

int main() {
    int n, co = 0;
    cin >> n;

    long long arr1[n], arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        arr2[n - i - 1] = arr1[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr1[i] == arr2[i]) {
            co++;
        }
    }

    if (co == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
