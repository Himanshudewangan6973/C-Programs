#include<stdio.h>
int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
    printf("%c is alphabet",ch);
else if(((ch>=48)&&(ch<=57)))
    printf("%c is numerical",ch);
else if(((ch>=0)&&(ch<=47))||((ch>=58)&&(ch<=64))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=127)))
    printf("%c is special symbol",ch);
return 0;
}
