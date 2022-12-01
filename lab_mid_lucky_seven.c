#include<stdio.h>
#include<string.h>

int main()
{
    int T, i, j, l, n;
    scanf("%d",&T);
    char s[T][20];
    for(i=0; i<T; i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0; i<T; i++)
    {
        n = 0;
        l =strlen(s[i]);
        for(j=0; j<l/2; j++)
        {
            if(s[i][0+j] == s[i][l-j-1])
            {
                n = 1;
            }

            else{
                n=0;
                break;
            }

        }

        if(n==0)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(l>7)
            {
                printf("Case #2: %c%d%c\n",s[i][0],l-2,s[i][l-1]);
            }
            else
            {
                printf("Case #3: %s\n",s[i]);
            }
        }
    }
    return 0;
}
