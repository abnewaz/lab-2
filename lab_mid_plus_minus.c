#include<stdio.h>
#include<string.h>

int main()
{
    int N, i, max=0, sum=0;


    scanf("%d",&N);

    char sign[N];
    scanf("%s",sign);
    //printf("%s",sign);
    for(i=0; i<N; i++)
    {
        sum = sum +1;

        if(max < sum)
        {
            max = sum;
        }

        if(sign[i] != sign[i+1])
        {
            sum = 0;
        }

     }

     printf("%d",max);


    return 0;
}
