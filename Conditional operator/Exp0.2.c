#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    (ch>=65&&ch<=90)?printf("\n%c is uppercase letter.",ch):printf("\n%c is lowercase letter.",ch);
    return 0;
}
