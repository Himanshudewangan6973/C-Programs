#include<stdio.h>
int add();
int main()
{
    int sum;
    sum=add();
    printf("Addition =%d\n",sum);
    return 0;
}
int add()
{
    int a=10,b=20;
    return a+b;
}
