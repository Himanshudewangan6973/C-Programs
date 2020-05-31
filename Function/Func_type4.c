#include<stdio.h>
int add();
int main()
{
    int a=20,b=30,sum;
    sum=add(a,b);
    printf("Addition =%d\n",sum);
    return 0;
}
int add(int x,int y)
{
    return (x+y);
}
