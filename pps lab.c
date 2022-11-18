#include<stdio.h>
int main()
{
    int A[20],num,c1=0,c2=0,i;
    printf("How many student mark: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }
    int max,min;
    max=A[0];
    min=A[0];
    for(i=0;i<num;i++)
    {
        if(max<A[i])
        {
         c1++;
        }

    }
    for(i=0;i<num;i++)
    {
        if(min>A[i])
        {
            c2++;
        }
    }

    printf("The higest mark student:%d\n",c1);
     printf("The lowest mark student:%d\n",c2);


}
