#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    printf("\n%d is the maximum between the two.\n",max);
    return 0;
}
