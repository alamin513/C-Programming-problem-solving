#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("Entered character is alphabet\n");
    }
    else
    {
        printf("Entered character is not alphabet\n");
    }
    return 0;
}
