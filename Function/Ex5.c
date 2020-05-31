/*Write a program to check whether a number prime,Armstrong or perfect number using functions.*/
#include<stdio.h>
int prime(int n)
{
    int sum=0,sum1=0,a,p=0,i,n1;
    n1=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            p=1;
        else
            p=0;
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum1=sum1+i;
    }
    if(sum==n)
        return printf("\n%d is an Armstrong no.\n",n1);
    else if(p==1)
        return printf("\n%d is a prime no.\n",n1);
    else if(sum1==n)
        return printf("\n%d is a perfect no.\n",n1);
    else
        return printf("\nIt's a different no.\n");
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
