#include<stdio.h>
#define MAX 3
int main()
{
    int a[MAX][MAX],n,i,j,sum=0;
    printf("ENTER THE NO. OF ROW AND COLLUMN ");
    scanf("%d",&n);
    printf("ENTER THE VALUE OF MATRIX ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
     printf("VALUE OF MATRIX IS \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",a[i][j]);
            printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if ((i==j)||(i+j==n-1))
             sum+=a[i][j];

    }
    printf("SUM OF BOTH DIAGONAL IS %d",sum);


    return 0;
}

