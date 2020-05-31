/*Write a program to check whether a number is even or odd using functions.*/
#include<stdio.h>
int even_odd(int n)
{
    return (n%2==0)?1:0;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(even_odd(n))
        printf("%d is even\n",n);
    else
        printf("%d is odd\n",n);
    return 0;
}
