#include<stdio.h>
int main()
{
   char str1[50];
   char str2[50];
   printf("Enter the name: ");
   gets(str1);
   strcpy(str2,str1);
   printf("The first name:%s\n",str1);
   printf("The second name:%s\n",str2);


}
