#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, i, j, add=0, res=0, m, n;
//    printf("Bismillah...\n");
//    scanf("%d",&a);
//    printf("%d",a);
    scanf("%d %d",&n,&m);
    int arr[n][m];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
//    for(i=0; i<n; i++)
//    {
//        for(j=0; j<m; j++)
//        {
//            printf("%d\t",arr[i][j]);
//        }
//        printf("\n");
//
//    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr[i][j]==j+1 && i+1==arr[i][j])
            {
                arr[i][j] = arr[i][j] + 3;
            }
            else if(i+1== arr[i][j])
            {
                arr[i][j] = arr[i][j] + 2;
            }
            else if(j+1 == arr[i][j])
            {
                arr[i][j] = arr[i][j] + 1;
            }
        }

    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }

    return 0;
}
