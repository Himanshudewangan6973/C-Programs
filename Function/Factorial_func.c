#include<stdio.h>
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int a;
    printf("\t    Finding Factorial of a number.\n\n\t\tEnter a number : ");
    scanf("%d",&a);
    printf("\t\tFactorial of %d = %d\n",a,fact(a));
    return 0;
}
