#include<stdio.h>
int main()
{while(1){
    int i,num,count=0;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }if(count==0)
    printf("prime number\n");
    else
    printf("Not prime number\n");}
}
