#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is the maximum number",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d is the maximum number",b);
    }
    else
    {
        printf("%d is the maximum number",c);
    }
    return 0;
}
