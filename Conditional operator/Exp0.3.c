#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))?printf("\n%c is a character",ch):printf("\n%c is special symbol",ch);
    return 0;
}
