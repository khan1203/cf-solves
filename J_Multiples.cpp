#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a>=b && a%b==0) cout<<"Multiples"<<endl;
    else if(a<b && b%a==0) cout << "Multiples"<<endl;
    else cout<<"No Multiples"<<endl;
}