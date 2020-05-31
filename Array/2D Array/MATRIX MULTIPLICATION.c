#include<stdio.h>
#define MAX 3
int main()
{
    int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],n,i,j,r1,r2,c1,c2,k,sum=0;
    printf("ENTER THE NO. OF ROW AND COLUMN OF 1ST MATRIX ");
    scanf("%d%d",&r1,&c1);
    printf("ENTER THE NO. OF ROW AND COLUMN OF 1ST MATRIX ");
    scanf("%d%d",&r2,&c2);
if(c1==r2)
{
    printf("ENTER THE VALUE OF MATRIX A ");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
           scanf("%d",&a[i][j]);

    printf("ENTER THE VALUE OF MATRIX B ");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

     printf("VALUE OF MATRIX A IS \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d",a[i][j]);
            printf("\n");
    }
      printf("VALUE OF MATRIX B IS \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d",b[i][j]);
            printf("\n");
    }


    for(i=0;i<r1;i++) //column
        for(j=0;j<c2;j++)  //row
        {sum=0;
          for(k=0;k<c1;k++)  //multiplication
            sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
        }
      printf("VALUE OF MATRIX C IS \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d",c[i][j]);
            printf("\n");
    }
}
    return 0;
}







