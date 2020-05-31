#include<stdio.h>
int main()
{
    int i,j,k,n,s,l;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   s=n;
        for(j=i;j<=n;j++)
        printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",s--);
            s=s+1;
            for(l=1;l<i;l++)
            printf("%d",++s);
            printf("\n");
    }
    return 0;
}
