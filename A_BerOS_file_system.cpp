#include<iostream>
using namespace std;

void solve(){
    string t, s; cin >> s;
    int i = 0, f = 0, l = s.size();
    
    if(l == 1){
        cout << s;
    }
    else{
       while(i < l){
            if(isalpha(s[i])){
                t += s[i];
                f = 0;
            }
            else{
                if(!f and (l - 1) != i){
                    t += s[i];
                    f = 1;
                }
            }
            i++;
       }
       
       int t_size = t.size();
       if(t_size > 1){
           if(t[t_size - 1] == '/'){
               for(int j = 0; j < t_size - 1; j++){
                   cout << t[j];
               }
           }
           else{
               cout << t;
           }
       }
       else{
           cout << t;
       }
    }
}

int main()
{
    solve();
    
 return 0;
}