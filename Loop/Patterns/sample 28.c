#include<stdio.h>
int main()
{
    int i,j,k,l,n,m,q,o,p;
    printf("enter the number of rows:");
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        for(j=i;j<q;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        for(l=1;l<i;l++)
            printf("*");
        printf("\n");
    }
    for(m=1;m<q;m++)
    {
        for(n=1;n<=m;n++)
            printf(" ");
        for(o=m;o<q;o++)
            printf("*");
        for(p=1;p<n+1;p++)
            printf("*");
        printf("\n");
    }
    return 0;
}
