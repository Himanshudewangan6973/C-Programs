/*A cashier has a currency notes of denominations 10,50 and 100, if the amount to be withdrawn is input through the keyboard in hundreds,
find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.*/
#include<stdio.h>
int main(){
int total,noh,nof,not,amt;
printf("Enter the amount to be withdrawn:");
scanf("%d",&amt);
noh=amt/100;
amt=amt%100;
nof=amt/50;
amt=amt%50;
not=amt/10;
total=noh+nof+not;
printf("\nNumber of notes of 100=%d\n",noh);
printf("Number of notes of 50=%d\n",nof);
printf("Number of notes of 10=%d\n",not);
printf("\nTotal number of currency notes is %d\n\n",total);
return 0;
}
