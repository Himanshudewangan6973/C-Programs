#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a,b;
    printf("Enter any number two number:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d & b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d & b=%d\n",a,b);
    return 0;
}
