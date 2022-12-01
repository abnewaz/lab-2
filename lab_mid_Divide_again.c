#include<stdio.h>
#include<string.h>

int main()
{


    long long int n, d;
    scanf("%lld",&n);
    if(n%3==0)
    {
        d = n/3;
        printf("%lld",d);
        }
    else
    {
        printf("-1");
    }

    return 0;
}
