/*WAP to check whether entered character is VOWEL or CONSONANT.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    printf("\n");
    if( ((ch>='a') && (ch<='z') )||( (ch>='A') && (ch<='Z')))
    {
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("the character is a vowel\n");
            break;
        default:
            printf("the character is a consonent\n");
            break;
        }
    }
    else
        printf("The entered character is NOT VALID\n");
    return 0;
}
