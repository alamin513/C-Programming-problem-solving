#include<stdio.h>
int main()
{
    int A[10][10],i,j,row,col,upperSum=0,lowerSum=0;
    printf("Enter the row and column for matrix: ");
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                upperSum=upperSum+A[i][j];
            }
            if(j<i)
            {
                lowerSum=lowerSum+A[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum: %d %d",upperSum,lowerSum);
}
