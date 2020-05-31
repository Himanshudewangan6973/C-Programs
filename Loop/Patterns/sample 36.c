#include<stdio.h>
int main()
{
    int i,j,s,r=0,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("\n");
    s=n;
    for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
                printf("*");
            for(j=0;j<=2*s;j++)
                printf(" ");
            for(j=0;j<=i;j++)
                printf("*");
            printf("\n");
            s--;
        }
    s=n;
    for(i=0;i<=n;i++)
        {
            for(j=0;j<=s;j++)
                printf("*");
            for(j=0;j<=r;j++)
                printf(" ");
            for(j=0;j<=s;j++)
                printf("*");
            printf("\n");
            r+=2;
            s--;
        }
}
