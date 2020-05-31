/*If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
(Hint: Use the modulus operator '%')*/
#include<stdio.h>
int main(){
int n,n1,a,b,c,d,e,sum;
printf("Enter five-digit number:");
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
sum=a+b+c+d+e;
printf("Sum of digits of five-digit number=%d,\nis=%d\n",n1,sum);
return 0;
}
