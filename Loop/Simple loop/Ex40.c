#include<stdio.h>
int main()
{
    int i,sum=0,n,j;
    printf("Enter any number:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        sum=0;
        for(i=1;i<j;i++)
    {
        if(j%i==0)
            sum+=i;
    }
    if(sum==j)
        printf("\n%d is a perfect number.",j);
    }
    printf("\n");
    return 0;
}
