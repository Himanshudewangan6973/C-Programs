#include<stdio.h>
int main()

{
    int a,b,i,p=1;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("\n%d ^ %d = %d\n",a,b,p);
    return 0;
}
