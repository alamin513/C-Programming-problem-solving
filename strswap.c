#include<stdio.h>
int main()
{
    char str1[15]="Bngladesh";
    char str2[15]="India";
    char temp[15];
    printf("Before swaping\n");
     printf("STR1:%s\n",str1);
    printf("STR2:%s\n",str2);


    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("After swaping\n");
    printf("STR1:%s\n",str1);
    printf("STR2:%s\n",str2);


}
