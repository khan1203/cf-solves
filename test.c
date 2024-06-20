#include <stdio.h>
#define size 100

int main()
{
    char name1[size], name2[size];
    char lastname1[size], lastname2[size];

    fgets(name1, sizeof name1, stdin);
    fgets(name2, sizeof name2, stdin);

    for (int i = ' '; i < '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            lastname1[j] = name1[i];
            lastname2[j] = name2[i];
        }
    }


    puts(lastname1);
}