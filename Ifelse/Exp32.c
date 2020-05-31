#include<stdio.h>
int main()
{
    float unit,sur,amt,t_amt;
    printf("Enter the electricity unit charge:");
    scanf("%f",&unit);
    if(unit<50)
        amt=unit*0.50;
    else if(unit<=150)
        amt=((50*.50)+((unit-50)*.750));
    else if(unit<=250)
        amt=((50*.50)+(100*.750)+((unit-100)*1.20));
    else if(unit>250)
        amt=((50*.50)+(100*.75)+(100*1.20)+((unit-250)*1.50));
    sur=(amt*20/100);
    t_amt=amt+sur;
    printf("Total electricity bill = %f",t_amt);
    return 0;
}
