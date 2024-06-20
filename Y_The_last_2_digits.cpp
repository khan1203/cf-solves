#include <iostream>

int main() {
    using namespace std;

    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    long long int product = A* B * C * D;

    int lastTwoDigits = product % 100;

    cout << lastTwoDigits << endl;

    return 0;
}
