#include<stdio.h>
int main()
{
    char str[15];
    printf("Enter any name: ");
    gets(str);
    strlwr(str);
    printf("%s\n",str);
}

