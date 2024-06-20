#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string rearrangeSum(string s)
{
    // Split the string into numbers
    vector<int> numbers;
    for (size_t i = 0; i < s.length();)
    {
        size_t j = s.find('+', i);
        numbers.push_back(stoi(s.substr(i, j - i)));
        i = j + 1;
    }

    // Sort the numbers in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Create a new string with the sorted numbers
    string newSum;
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        newSum += to_string(numbers[i]);
        if (i < numbers.size() - 1)
            newSum += '+';
    }

    return newSum;
}

int main()
{
    string s;
    cin >> s;

    cout << rearrangeSum(s);

    return 0;
}