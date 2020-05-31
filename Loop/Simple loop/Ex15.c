#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
        printf("%d\n",sum);
    return 0;
}
