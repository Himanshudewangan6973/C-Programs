#include<stdio.h>
int main()
{
    int yr;
    printf("Enter any year:");
    scanf("%d",&yr);
    ((yr%400==0)||(yr%100!=0)&&(yr%4==0))?printf("\n%d is leap year.\n",yr):printf("\n%d is not a leap year.\n",yr);
    return 0;
}
