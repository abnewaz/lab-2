#include<stdio.h>
#include<string.h>

int main()
{
    int a, n, i, j;
    scanf("%d",&n);
    //printf("N=%d\n",n);
    if(n==1)
    {
        printf("1");

    }
    else
    {
        for(i=0; i<n; i++)
        {
            printf("%d",i+1);
        }
        printf("\n");
        for(i=2; i<=n-1; i++)
        {
            printf("%d",i);
            for(j=0; j<n-2; j++)
            {
                printf(" ");

            }
            printf("%d",n);
            printf("\n");
        }
        for(i=0; i<n; i++)
        {
            printf("%d",n);
        }
        //printf("\n");

    }
    return 0;
}
