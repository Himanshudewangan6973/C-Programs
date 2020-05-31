#include<stdio.h>
int main()
{
    int i,j,k,n,s;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=n;
        for(j=i;j<n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",s--);
            printf("\n");
    }
    return 0;
}
