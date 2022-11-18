#include<stdio.h>
int main()
{
    int A[10],num,i;
    printf("How many numbers: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }

    int c=A[2];
    for(i=0;i<num;i++)
    {
        if(c==A[i])
        {
            continue;
        }
        printf("%d\n",A[i]);
    }




}
