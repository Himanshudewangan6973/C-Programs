#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b?(a>c?a:b):(b>c?b:c));
    printf("%d is the greatest",max);
    return 0;
}
