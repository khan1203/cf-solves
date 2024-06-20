#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    string line;
    string result;

    while (getline(cin, line))
    {
        // Remove spaces and accumulate all characters
        for (char c : line)
        {
            if (c != ' ')
            {
                result += c;
            }
        }
    }

    // Sort the accumulated characters
    sort(result.begin(), result.end());

    // Print the sorted result
    cout << result << endl;

    return 0;
}
