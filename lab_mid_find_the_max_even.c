#include<stdio.h>
#include<string.h>

int main()
{
    int N, max=0, i, j, step_sum = 0;
    scanf("%d",&N);
    int A[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<N-1; i++)
    {
        for(j=i+1; j<N; j++)
        {
            printf("[%d,%d]",A[i],A[j]);
            if (A[i] != A[j])
            {
                step_sum = A[i] + A[j];
                if(step_sum > max && step_sum%2==0)
                {
                    max = step_sum;
                }
            }
        }
    }
    printf("%d",max);




    return 0;
}
