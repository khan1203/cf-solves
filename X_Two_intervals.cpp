#include <iostream>
using namespace std;

pair<int, int> find_intersection(int l1, int r1, int l2, int r2) {
    if (r1 < l2 || r2 < l1) {
        return {-1, -1};
    }

    int intersection_start = max(l1, l2);
    int intersection_end = min(r1, r2);

    return {intersection_start, intersection_end};
}

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    pair<int, int> result = find_intersection(l1, r1, l2, r2);

    if (result.first == -1) {
        cout << -1 << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
