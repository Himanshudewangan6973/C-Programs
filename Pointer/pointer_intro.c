/*  *p (pointer p)= value of address contained in p
* = indirection operator(value contained in)
& = address of */

#include<stdio.h>
int main()
{
    int a;//10
    int *p;//200
    p=&a;//100
    printf("%d\n",a);//10
    printf("%u\n",&a);//100
    printf("%u\n",&p);//200
    printf("%u\n",p);//100
    printf("%d\n",*p);//10
    printf("%u\n",*(&p));//100
    printf("%d\n",**(&p));//10
    return 0;
}
