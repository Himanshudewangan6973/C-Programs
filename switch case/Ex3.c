/*Example of Switch Case with character variable and with multiple cases for a single statement.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter alphabet a,b,s:");
    scanf("%c",&ch);
    printf("\n");
    switch( ch )
    {
        case 'a':
        case 'A':
                printf(" the alphabet is a \n");
                break;
        case 'b':
        case 'B':
                printf("the alphabet is b \n");
                break;
        case 's':
        case 'S':
                printf("the alphabet is s \n");
                break;
        default:
                printf("no switch \n");
    }
    return 0;
}
