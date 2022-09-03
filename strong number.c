#include<stdio.h>
int main()
{
    int temp,sum=0,num,rem,i,fact;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a STRONG NUMBER",num);
    }
    else
    {
        printf("%d is not a STRONG NUMBER",num);
    }
    return 0;
}
