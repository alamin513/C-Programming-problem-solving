#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter any name: ");
    gets(str);
     printf("STR=%s\n",str);


    strrev(str);
    printf("STR=%s",str);


    }
