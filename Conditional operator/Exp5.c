#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the value of a:");
    scanf("%c",&ch);
    ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))?printf("\n%c is a character.\n",ch):printf("\n%c is not a cheracter.\n",ch);
    return 0;
}
