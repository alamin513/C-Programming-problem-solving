#include<stdio.h>
int main()
{
    int i, N;
    int M_R1[10];
    int M_R2[10];
    int a, b;


    printf("Enter the number of nation:");
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {


        int j;

        if(i==0){
            printf("Enter the number of general:");
            scanf("%d", &a);
            printf("Enter the rank for %d country:", i+1);
            for(j=0; j<a; j++)
                {
                    scanf("%d", &M_R1[j]);
                }
        }
        else if(i==1){
            printf("Enter the number of general:");
            scanf("%d", &b);
            printf("Enter the rank for %d country:", i+1);
            for(j=0; j<b; j++)
            {
                scanf("%d", &M_R2[j]);
            }
        }
    }



    int max_a;
    int max_b;
    max_a = M_R1[0];
    max_b = M_R2[0];

    //for first array
    for(i=0; i<a; i++)
    {

        if(max_a<M_R1[i])
        {
            max_a = M_R1[i];
        }
    }

    //for second array
    for(i=0; i<b; i++)
    {

        if(max_b<M_R2[i])
        {
            max_b = M_R2[i];
        }
    }

    if(max_a>max_b)
    {
        printf("Nation 1 will be victorious\n");
        printf("%d", max_a);
    }
    else{
        printf("Nation 2 will be victorious\n");
        printf("%d", max_b);
    }

    getch();

}
