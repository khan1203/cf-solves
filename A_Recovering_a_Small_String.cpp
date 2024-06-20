#include <iostream>

using namespace std;

int main()
{
    int n, minSum = 99, minWord[3];
    cin >> n;

    for (char a = 'a'; a <= 'z'; a++) {
        for (char b = 'a'; b <= 'z'; b++) {
            for (char c = 'a'; c <= 'z'; c++) {
                int sum = a + b + c;
                if (sum < minSum && sum >= n) {
                    minSum = sum;
                    minWord[0] = a;
                    minWord[1] = b;
                    minWord[2] = c;
                }
            }
        }
    }

    if (minSum == n) {
        cout << minWord[0] << minWord[1] << minWord[2] << endl;
    } else {
        cout << "No solution" << endl;
    }

    return 0;
}