#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, c, d=0, i;
    char s[20];
    scanf("%s",s);
    scanf("%d %d",&a,&b);
    for(i=0; s[i] != '\0'; i++)
    {
        c=0;
        if(s[i] == '*')
        {
            c = a*b;
        }
        else if(s[i] == '+')
        {
            c = a+b;
        }
        d += c;
    }
    printf("%d",d);
    return 0;
}
