#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string year;
    cin>>year;
    
    for(int i=0; i<year.length(); i++)
    {
        for(int j=1; i<year.length(); j++)
        {
            if(year[i]==year[j])
            {
                cout<<"NO"<<"\n";
            }
        }
        
    }
    cout<<"YES"<<"\n";
    return 0;
}