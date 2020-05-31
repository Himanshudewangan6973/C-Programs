#include<stdio.h>
int main()
{
    int n,n1,a,rev=0;

    printf("Enter the number:");
    scanf("%d",&n);

    n1=n;
    a=n1%10;
    rev=rev+a*10000;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*1000;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*100;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*10;
    n1=n1/10;
    a=n1%10;
    rev=rev+a*1;

    printf("\nReverse of the entered number is %d\n",rev);

    if(n==rev)
        printf("Both are aqual.\n");
    else
    printf("They are not equal.\n");

    return 0;
}
