#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("Factorial of %d = %d",n,f);
    return 0;
}
