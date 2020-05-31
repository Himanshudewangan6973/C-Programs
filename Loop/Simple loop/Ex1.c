#include<stdio.h>
int main()
{
    int hr,otp,i;
    i=1;
    while(i<=10)
    {
        printf("\nEnter the hour worked by employee %d:",i);
        scanf("%d",&hr);
        if(hr>40)
        {
            otp=(hr-40)*12;
            printf("\nOver time pay of the employee %d is %d\n",i,otp);
        }
        else
        {
            otp=0;
            printf("\nNo over time pay for employee %d\n",i);
        }
        i++;
    }
    return 0;
}
