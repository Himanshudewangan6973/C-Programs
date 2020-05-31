#include<stdio.h>
int main()
{
    int i,n1,n2,n,f;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    n2=n%10;
    while(n>0)
        {
            f=n%10;
            n=n/10;
        }
        printf("First digit in %d is %d",n1,f);
        printf("Last digit in %d is %d\n",n1,n2);
        return 0;
}
