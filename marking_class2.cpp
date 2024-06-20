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
    Student s1, s2, s3, sf;

    cin >> s1.id >> s1.name >> s1.section >> s1.marks;
    cin >> s2.id >> s2.name >> s2.section >> s2.marks;
    cin >> s3.id >> s3.name >> s3.section >> s3.marks;

    if (s1.marks > s2.marks && s1.marks > s3.marks)
    {
        sf = s1;
    }
    else if (s2.marks > s1.marks && s2.marks > s3.marks)
    {
        sf = s2;
    }
    else if (s3.marks > s1.marks && s3.marks > s2.marks)
    {
        sf = s3;
    }
    else if (s1.marks == s2.marks && s1.marks == s3.marks)
    {
        if (s1.id < s2.id && s1.id < s3.id)
        {
            sf = s1;
        }
        else if(s2.id<s1.id && s2.id<s3.id)
        {
            sf = s2;
        }
        else{
            sf=s3;
        }
    }
    else if(s1.marks==s2.marks){
        if(s1.id<s2.id){
            sf=s1;
        }
        else{
            sf=s2;
        }
    }
    else if (s2.marks == s3.marks)
    {
        if (s2.id < s3.id)
        {
            sf = s2;
        }
        else
        {
            sf = s3;
        }
    }
    else if (s1.marks == s3.marks)
    {
        if (s1.id < s3.id)
        {
            sf = s1;
        }
        else
        {
            sf = s3;
        }
    }

    cout<<sf.id<<" "<<sf.name<<" "<<sf.section<<" "<<sf.marks<<endl;
}

int main()
{

    // solve();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}