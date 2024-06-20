#include <string>
#include <iostream>
using namespace std;

void swapFunc(char &ch1, char &ch2)
{
    char temp;
    temp = ch1;
    ch1 = ch2;
    ch2 = temp;
}

int main()
{
    string str;
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len; i += 2)
    {
        for (int j = i; j < len; j += 2)
        {
            // cout<<str[i]<<"\n";
            // cout<<str[j];
            if (str[i] > str[j])
                swapFunc(str[j], str[i]);
        }
    }

    cout << str;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// char swapFunc(char &ch1, char &ch2)
// {
//     char temp;
//     temp = ch1;
//     ch1 = ch2;
//     ch2 = temp;
// }

// int main()
// {
//     string str;
//     cin >> str;

//     int len = str.length();
//     for (int i = 0; i < '\0'; i + 2)
//     {
//         for (int j = i; j < '\0'; j + 2)
//         {
//             if (str[i] > str[j])
//                 swapFunc(str[j], str[i]);
//         }
//     }

//     cout << str;

//     return 0;
// }

// //  string str;
// //     cin >> str;

// //     int len = str.length();
// //     // cout << len << '\n';

// //     for (int i = 0; i < len; i += 2)
// //     {
// //         if (i <= len - 1 - 2)
// //         {
// //             cout << parseInt(str[i]) << " " << parseInt(str[i + 2]) << "\n";
// //             if (parseInt(str[i]) > parseInt(str[i + 2]))
// //             {
// //                 char temp = str[i + 2];
// //                 str[i + 2] = str[i];
// //                 str[i] = temp;
// //             }
// //         }
// //     }

// //     cout << str;