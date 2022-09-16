#include<stdio.h>
int main()
{
    int age;
    printf("Enter a age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("The person is voter");

    }
    else
    {
        printf("The person is not voter");
    }
    return 0;

}
