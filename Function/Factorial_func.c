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
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Factorial of %d = %d\n",a,fact(a));
    return 0;
}
