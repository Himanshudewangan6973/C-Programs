#include<stdio.h>
int main()
{ int n,n1,a,rev=0;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n>0)
{ a=n%10;
rev=rev*10+a;
n=n/10;


} printf("%d is reverse of %d",rev,n1);
return 0;

}
