#include<stdio.h>
int main()
{
    int i,j,k,n,s=97;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=n;k++)
            printf("%c",s);
        printf("\n");
        s++;
    }
    return 0;
}
