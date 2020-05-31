#include<stdio.h>
int main(){
int nod;
printf("Enter no. of late days");
scanf("%d",&nod);
if(nod>=1&&nod<=5)
printf("Fine = %.2f",nod*0.5);
else if(nod>=6&&nod<=10)
printf("Fine = %.2f",nod*1.00);
else if(nod>=11&&nod<=30)
printf("Fine = %.2f",nod*5.00);
else if(nod>30)
    printf("Your membership is cancelled");
return 0;
}
