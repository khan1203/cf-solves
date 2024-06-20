#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> vector_of_strings;

    string input;
    while (true) {
        cout << "> ";
        getline(cin, input);
        if (input.empty()) break;
        vector_of_strings.push_back(input);
    }


    vector<string> results;

    for (const auto& string1 : vector_of_strings) {
        for (const auto& string2 : vector_of_strings) {
            string combined_string = string1 + string2;
            results.push_back(combined_string);
        }
    }

    cout << "All combinations:\n";
    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
