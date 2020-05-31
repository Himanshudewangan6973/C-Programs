#include<stdio.h>
int main()
{
    int i,n1,n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    for(;n>0;)
    {
        n=n/10;
        count++;
    }
    printf("Number of digit in %d is %d",n1,count);
    return 0;
}
