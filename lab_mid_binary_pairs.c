#include<stdio.h>
#include<string.h>

int main()
{
    int a, c, i, j, counter_01, counter_10;

    scanf("%d",&a);
    int b[a];
    char s[a][1000];
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
        scanf("%s",s[i]);
    }
    printf("\n");

    for(j=0; j<a; j++) //test case iteration
    {

        counter_01 =0;
        counter_10 =0;



        if (b[j] > 1)
        {
            for(i=0; i<b[j]-1; i++) //string iteration
            {

                if(s[j][i] == '0' && s[j][i+1] == '1')
                {

                        counter_01 += 1;


                }
                else if(s[j][i] == '1' && s[j][i+1] == '0')
                {

                        counter_10 += 1;

                }

            }
        }
        c = counter_01 + counter_10;
        printf("%d\n",c);

    }
    return 0;
}
