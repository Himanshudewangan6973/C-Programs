#include<stdio.h>
int main()
{
    int a[3][4],i,j;
    printf("ENTER THE VALUE OF MATRIX ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
     printf("VALUE OF MATRIX IS \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%d",a[i][j]);
            printf("\n");
    }
    return 0;
}
