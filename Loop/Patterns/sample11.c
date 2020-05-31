#include<stdio.h>
int main()
{
    int i,j,k,l,n,s;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=i;j<n;j++)
            printf(" ");
            s=i;
        for(k=1;k<=i;k++)
            printf("%d",s++);
            s=s-1;
        for(l=1;l<i;l++)
            printf("%d",--s);
        printf("\n");}
        return 0;
}
