/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item.*/
#include<stdio.h>
int main(){
int p,cp,sp;
float cpi;
printf("Enter the total selling price of 15 items=");
scanf("%d",&sp);
printf("Enter the total profit of 15 items=");
scanf("%d",&p);
cp=sp-p;
cpi=cp/15;
printf("The cost price of one item is = %f",cpi);
return 0;
}
