#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);

    if(a>0)
        printf("\nNumber is positive.\n");
    else if(a<0)
        printf("\nNumber is negative.\n");
    else if(a==0)
        printf("\nNumber is zero.\n");

    return 0;
}
