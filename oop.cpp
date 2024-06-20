#include <bits/stdc++.h>
using namespace std;

class printer2;

class printer1
{
    int a;

public:
    printer1(int p11) { a = p11; }

    friend void inuse(printer1 o1, printer2 o2);
};

class printer2
{
    int b;

public:
    printer2(int p22) { b = p22; }

    friend void inuse(printer1 o1, printer2 o2);
};

void inuse(printer1 o1, printer2 o2)
{

    if (o1.a == 1 || o2.b == 1)
    {
        cout << "Printer is in use"
             << "\n";
    }
    else cout<<"Printer is free"<<"\n";
};

int main()
{
    int p, q;
    cin >> p >> q;
    printer1 p1(p);
    printer2 p2(q);

    inuse(p1, p2);

    return 0;
}