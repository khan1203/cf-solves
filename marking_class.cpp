// by Khan Muhammad Rifat (CSE, BUBT)
#include <bits/stdc++.h>
#define ll long long
#define PI 2 * acos(0.0)
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    char section;
    float marks;
};

void solve()
{
    Student s1, s2, s3;
    float max = 0.00;
    for (int i = 0; i < 3; i++)
    {
        cin >> s1.id >> s1.name >> s1.section >> s1.marks;
        if (s1.marks > max)
        {
            max = s1.marks;
            s2 = s1;
        }
        else if (s1.marks == max)
        {
            if (s1.id < s2.id)
            {
                s2 = s1;
            }
        }
    }

    cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}