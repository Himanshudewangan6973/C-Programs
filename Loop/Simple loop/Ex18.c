#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("\n%d *%d = %d",n,i,n*i);
        i++;
    }
    return 0;
}
