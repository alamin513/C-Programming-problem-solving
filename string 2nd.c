#include<stdio.h>
int main()
{
    char A[10];
    int i=0;
    printf("Enter the name: ");
    gets(A);
    while(A[i]!='\0')
   {
     printf("%c\n",A[i]);
     i++;
   }

}
