/**/
#include<stdio.h>
int main(){
float bs,hra,da,gs;
printf("Enter the basic salary of the employee =");
scanf("%f",&bs);
if(bs<1500){
    hra=bs*10/100;
    da=bs*90/100;}
    else
        {
        hra=500;
    da=bs*.98;}
    gs=bs+hra+da;
    printf("\nThe basic salary of the employ is %f\n",bs);
    printf("The house rent allowance of the employ is %f\n",hra);
    printf("The dearness allowance of the employ is %f\n",da);
    printf("The gross salary of the employ is %f\n",gs);
    return 0;
}
