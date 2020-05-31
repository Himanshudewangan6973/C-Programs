#include<stdio.h>
void add(int x,int y)
{
    int s;
    s=x+y;
    printf("Addition=%d",s);
}
int main()
{
    int a=10,b=20;
    add(a,b);
    return 0;
}
