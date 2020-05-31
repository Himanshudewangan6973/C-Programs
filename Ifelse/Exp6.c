#include<stdio.h>
int main()
{
    int a,b,c;

        printf("Enter the age of Ram:");
    scanf("%d",&a);
        printf("Enter the age of Shayam:");
    scanf("%d",&b);
        printf("Enter the age of Ajay:");
    scanf("%d",&c);

    if(a<b&&a<c)
        printf("\nRam is youngest.");
    else if(b<a&&b<c)
        printf("Shayam is youngest.");
    else if(c<b&&c<a)
        printf("Ajay is youngest.");

    return 0;
}
