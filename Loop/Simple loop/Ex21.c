#include<stdio.h>
int main()
{ int n,a,b,sum=0;
printf("enter the number");
scanf("%d",&n);
a=n%10;
while(n>0)
{ b=n%10;

n=n/10;
} sum=a+b;
printf("sum of first and last digit is %d",sum);
return 0;
}

