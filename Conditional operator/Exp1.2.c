#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the values of a and b:");
    scanf("%d%d",&a,&b);
    max=a>b?printf("\n%d is maximum between the two.\n",a):printf("\n%d is maximum between the two.\n",b);
    return 0;
}
