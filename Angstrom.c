#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("Angstrom");
    }
    else
    {
        printf("Not Angstrom");
    }
    return 0;
}
