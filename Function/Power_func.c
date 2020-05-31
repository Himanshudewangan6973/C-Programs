#include<stdio.h>
int power(int x,int y)
{
    int i,p=1;
    for(i=0;i<y;i++)
    {
        p=p*x;
    }
    return p;
}

int main()
{
    int a,b;
    printf("Enter the value of a & b :");
    scanf("%d%d",&a,&b);
    printf("%d raised to %d = %d\n",a,b,power(a,b));
    return 0;
}
