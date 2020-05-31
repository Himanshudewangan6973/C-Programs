#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n%10;
    while(n>=0&&a>=0)
    {
        a=n%10;
        switch(a)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    default:
        printf("Zero ");
        break;
    }
    n=n/10;
    if(n==0)
        break;
    }
    return 0;
}
