 #include<stdio.h>
 int main()
 {
    double num1,num2;
    printf("Enter any number: ");
    scanf("%lf %lf",&num1,&num2);
    getchar();

    char op;
    printf("Enter any operator: ");
    scanf("%c",&op);
     switch(op)
    {
    case '+':
        {
            printf("%lf + %lf=%lf\n",num1,num2,num1+num2);
        break;
        }
    case '-':
        {
            printf("%lf + %lf=%lf\n",num1,num2,num1-num2);
            break;
        }
    case '*':
        {
            printf("%lf * %lf=%lf\n",num1,num2,num1*num2);
            break;
        }
    case '/':
        {
            printf("%lf / %lf=%lf\n",num1,num2,num1/num2);
            break;
        }
    default:
        {
            printf("not valid");
        }
    }
}



