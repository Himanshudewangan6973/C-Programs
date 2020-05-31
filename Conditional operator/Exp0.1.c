#include<stdio.h>
int main()
{
    float sal;printf("Enter the salary:");
    scanf("%f",&sal);
    (sal<40000&&sal>25000)?printf("\nManager"):((sal<20000&&sal>15000)?printf("\nAccountant"):printf("\nClerk"));
    return 0;
}
