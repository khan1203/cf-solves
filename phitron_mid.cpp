#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_size 100000

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char str[max_size];
    scanf("%s", str);

    int v=0, c=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            v++;
        }
        else{
            c++;
        }
    } 

    printf("%d\n", c);
    return 0;
}
