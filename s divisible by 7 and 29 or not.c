#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%7==0&&num%29==0)
    {
        printf("Exactly divisible");
    }
    else
    {
        printf("Not divisible");
    }
    return 0;
}
