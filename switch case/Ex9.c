#include<stdio.h>
int one(int n)
{
    int a;
    a=n%10;
    while(n>0){
    n=n/10;
    n=one(n);
    printf("%d",n);}
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    return 0;
}
