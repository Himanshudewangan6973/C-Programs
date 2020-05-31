#include<stdio.h>
int main()
{
    float bs,gs,hra,da;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    if(bs<=10000)
        {
            hra=bs*.20;
            da=bs*.80;
        }
    else if(bs<=20000)
        {
            hra=bs*.250;
            da=bs*.90;
        }
    else if(bs>10000)
        {
            hra=bs*.30;
            da=bs*.950;
        }
        gs=bs+hra+da;
        printf("\nDearness Allowance of the employee is %f",da);
        printf("\nHouse Rent Allowance of the employee is %f",hra);
        printf("\nGross Salary of the employee is %f",gs);
return 0;
}
