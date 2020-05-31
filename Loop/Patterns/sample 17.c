#include<stdio.h>
int main()
{
    int i,j,n,s=97;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf("%c",s);
        printf("\n");
        s++;
    }
    return 0;
}
