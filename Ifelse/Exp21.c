#include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if((ch>=65)&&(ch<=90))
    printf("%c is upper case letter",ch);
else if((ch>=97)&&(ch<=122))
    printf("%c is lower case letter",ch);
return 0;
}
