#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel\n",ch);
    }
    else
    {
        printf("%c is consonant\n",ch);

    }
    return 0;
}
