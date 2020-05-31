#include <stdio.h>
#include <ctype.h>
int main()
{
char ch,ch1;
printf("Enter the character:");
scanf("%c",&ch);
ch1=tolower(ch);
if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u')
printf("%c is a vowel.",ch);
else
printf("%c is a consonent.",ch);
return 0;
}
