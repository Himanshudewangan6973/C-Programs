#include<stdio.h>
int main()
{ int n,n1,a,rev=0;
printf("enter the number to check for palindrome:");
scanf("%d",&n);
n1=n;
while(n>0)
{ a=n%10;
rev=rev*10+a;
n=n/10;


} if(n1==rev)
{
    printf("entered number is palindrome\n");
} else
 printf("entered number is not a palindrome.\n");
return 0;
}
