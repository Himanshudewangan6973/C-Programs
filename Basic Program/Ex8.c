/*If a five-digit number is input through the keyboard, write a program to reverse the number*/
#include<stdio.h>
int main(){
int a,b,c,d,e,rev,n,n1;
printf("Enter the number to reverse:");
scanf("%d",&n);
n1=n;//n=12345
a=n%10;//n=5
n=n/10;//n=1234
b=n%10;//n=4
n=n/10;//n=123
c=n%10;//n=3
n=n/10;//n=12
d=n%10;//n=2
n=n/10;//n=1
e=n%10;//n=1
rev=a*10000+b*1000+c*100+d*10+e*1;
printf("Reverse of number %d is %d\n",n1,rev);
return 0;
}
