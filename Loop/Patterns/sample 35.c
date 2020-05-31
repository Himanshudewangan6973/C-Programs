#include<stdio.h>
int main()
{
    int i,j,s,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    s=n;
    for(i=0;i<n;i++)
        {
        for(j=0;j<=s;j++)
        {
            printf(" ");
        }
            s--;
        for(j=0;j<=i;j++)
            printf("*");
            printf("\n");
        }
    s=n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=s;j++)
        {
            printf("*");
        }
        s--;
        printf("\n");
    }
}
