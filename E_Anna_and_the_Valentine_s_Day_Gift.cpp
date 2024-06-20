#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to reverse digits of a number
int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to check if Sasha can win with optimal play
bool canWin(int m, vector<int>& nums, unordered_map<int, bool>& memo) {
    // If the current state of the list is already memoized, return the result
    int state = 0;
    for (int num : nums)
        state = state * 10 + num;
    if (memo.find(state) != memo.end())
        return memo[state];

    // Check if Sasha can win with optimal play
    bool sashaWin = false;
    for (int i = 0; i < nums.size() && !sashaWin; ++i) {
        for (int j = i + 1; j < nums.size() && !sashaWin; ++j) {
            int concatenated1 = nums[i] * 10 + nums[j];
            int concatenated2 = nums[j] * 10 + nums[i];
            vector<int> newNums;
            for (int k = 0; k < nums.size(); ++k) {
                if (k != i && k != j)
                    newNums.push_back(nums[k]);
            }
            newNums.push_back(max(concatenated1, concatenated2));
            sashaWin = !canWin(m, newNums, memo);
        }
    }

    // If Sasha can't win, check if Anna can win
    if (!sashaWin) {
        for (int i = 0; i < nums.size() && !sashaWin; ++i) {
            int reversedNum = reverseDigits(nums[i]);
            if (reversedNum != nums[i]) {
                vector<int> newNums = nums;
                newNums[i] = reversedNum;
                sashaWin = !canWin(m, newNums, memo);
            }
        }
    }

    // Memoize the result and return
    memo[state] = sashaWin;
    return sashaWin;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        vector<int> nums(n);
        for (int j = 0; j < n; ++j) {
            cin >> nums[j];
        }
        unordered_map<int, bool> memo;
        if (canWin(m, nums, memo)) {
            cout << "Sasha" << endl;
        } else {
            cout << "Anna" << endl;
        }
    }

    return 0;
}
