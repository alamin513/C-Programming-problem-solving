#include<stdio.h>
int main()
{
    int A[20],num,x;
    int i;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(i=0; i<num; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter delete number: ");
    scanf("%d",&x);

    for(i=0; i<num; i++)
    {
        if(x==A[i])
        {
            continue;
        }
        printf("%d\n",A[i]);
    }




}

