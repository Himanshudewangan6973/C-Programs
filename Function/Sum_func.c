#include<stdio.h>
float sum(int a,float b)
{
    return (a+b);
}
int main()
{
    int a;
    float b;
    printf("Enter the value of a & b :");
    scanf("%d%f",&a,&b);
    printf("Sum = %10.3f",sum(a,b));
    return 0;
}
