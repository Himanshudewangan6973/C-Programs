/*Write a program to find cube of any number using function.*/
#include<stdio.h>
double cube(double n)
{
    return n*n*n;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Cube of %d = %.1lf\n",n,cube(n));
    return 0;
}
