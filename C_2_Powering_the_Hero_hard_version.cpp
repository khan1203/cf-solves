#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, total_power;
        cin >> n;

        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        priority_queue<int, vector<int>, greater<int>> bonus_pq;
        priority_queue<int> hero_pq;

        for (int i = 0; i < n; i++) {
            if (s[i] == 0) {
                if (!bonus_pq.empty()) {
                    int power = -bonus_pq.top();
                    bonus_pq.pop();
                    total_power += power;
                    hero_pq.push(power);
                }
            } else {
                bonus_pq.push(-s[i]);
            }
        }

        while (!hero_pq.empty()) {
            int power = hero_pq.top();
            hero_pq.pop();
            total_power += power;
        }

        cout << total_power << endl;
    }

    return 0;
}