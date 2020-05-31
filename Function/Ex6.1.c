/*Write a program to find all prime numbers between given interval using functions.*/
#include<stdio.h>
void prime(int x,int y)
{
    int i,j;
    while(i<=x)
        {
    i=2;
    while(i<x)
    {
        if(x%i==0)
            break;
        else
            i++;
    }
        }
    if(x==i)
            printf("\n%d is a prime no.\n",x);
}
int main()
{
    int a,b;
    printf("Enter the interval:");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
