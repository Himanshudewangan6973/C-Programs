#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",i);
            printf("\n");
    }
    return 0;
}
