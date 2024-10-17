// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define PI 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

int findMaxOccurrenceElement(const vector<int> &arr)
{
    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int result = 0;

    for (int num : arr)
    {
        freqMap[num]++;
        if (freqMap[num] > maxFreq)
        {
            maxFreq = freqMap[num];
            result = num;
        }
        else if (freqMap[num] == maxFreq)
        {
            result = max(result, num);
        }
    }

    return result;
}

void deleteOccurrences(vector<int> &vec, int n)
{
    unordered_map<int, int> freqMap;

    for (int num : vec)
    {
        freqMap[num]++;
    }

    int maxItem = vec[0];
    int maxFreq = freqMap[maxItem];

    for (const auto &pair : freqMap)
    {
        if (pair.second > maxFreq)
        {
            maxFreq = pair.second;
            maxItem = pair.first;
        }
    }

    int removedCount = 0;
    for (auto it = vec.begin(); it != vec.end() && removedCount < n;)
    {
        if (*it == maxItem)
        {
            it = vec.erase(it);
            removedCount++;
        }
        else
        {
            ++it;
        }
    }
}

// void keepOneOccurrence(vector<int> &arr)
// {
//     int maxOccurringElement = findMaxOccurrenceElement(arr);
//     int count = 0;

//     for (auto it = arr.begin(); it != arr.end();)
//     {
//         if (*it == maxOccurringElement)
//         {
//             count++;
//             if (count > 1)
//             {
//                 it = arr.erase(it);
//             }
//             else
//             {
//                 ++it;
//             }
//         }
//         else
//         {
//             ++it;
//         }
//     }
// }

int main()
{
    Fast_io();

    int q;
    cin >> q;

    vector<int> arr;
    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        else if (op == 2)
        {
            if (arr.empty())
            {
                cout << "empty" << "\n";
                // continue;
            }
            else
            {
                int occ = findMaxOccurrenceElement(arr);
                cout << occ << "\n";
                int x = max(1, occ - 1);
                deleteOccurrences(arr, x);
            }
        }
    }
    return 0;
}