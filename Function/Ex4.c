/*Write a program to check whether a number is even or odd using functions.*/
#include<stdio.h>
int even_odd(int n)
{
    if(n%2==0)
        return printf("%d is Even\n",n);
    else
        return printf("%d is Odd\n",n);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    even_odd(n);
    return 0;
}
