#include<stdio.h>
int main()
{
    int i,j,k,n,l,temp;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
            temp=i;
        for(l=2;l<=i;l++)
            printf("%d",--temp);
            printf("\n");
    }
    return 0;
}
