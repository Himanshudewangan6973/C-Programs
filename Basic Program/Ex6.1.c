/*Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D
with the help of third variable.*/
#include<stdio.h>
int main(){
int C,D,temp;
printf("Enter the value of C and D to be interchanged:\n");
printf("C=");
scanf("%d",&C);
printf("D=");
scanf("%d",&D);
temp=C;
C=D;
D=temp;
printf("Value of C and D after interchange:");
printf("\nC=%d\t",C);
printf("D=%d\n",D);
return 0;
}
