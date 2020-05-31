#include<stdio.h>   //UPPER AND LOWER
#define MAX 3
int main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],n,i,j;
    printf("ENTER THE NO. OF ROW AND COLUMN ");
    scanf("%d",&n);
    printf("ENTER THE VALUE OF MATRIX A ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("ENTER THE VALUE OF MATRIX B ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
     printf("VALUE OF MATRIX A IS \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",a[i][j]);
            printf("\n");
    }
      printf("VALUE OF MATRIX B IS \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",b[i][j]);
            printf("\n");
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
      printf("VALUE OF MATRIX C IS \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",c[i][j]);
            printf("\n");
    }
    return 0;
}






