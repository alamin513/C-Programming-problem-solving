#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    int count=10;

    while(count>=1)
    {
        int product=count*number;
        printf("%d*%d=%d\n",number,count,product);
        count=count-1;
    }
    return 0;
}

