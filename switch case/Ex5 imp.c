/*Write a menu driven program which has following options:
  1. Factorial of a number
  2. Prime or not
  3. Odd or even
  4. Exit
*/
#include<stdio.h>
int main()
{
    int choice,n,f,i;
    while(1)
    {
        printf("\n\n\t   MENU \t\t\n");
        printf("\n \t1.factorial" );
        printf("\n \t2.prime or not");
        printf("\n \t3.even or odd");
        printf("\n \t4.exit\n");
        printf(" \tEnter your choice:\t");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1:f=1;
                printf("\tenter the number:");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                    f=f*i;
                printf("\tfactorial value of %d=%d",n,f);
                break;
            case 2:
                printf("\tenter the number:");
                scanf("%d",&n);
                for(i=2;i<n;i++)
                {
                    if(n%i==0)
                        break;
                }
                if(i==n)
                    printf("\t%d is prime",n);
                else
                    printf("\t%d is not prime",n);
                    break;
            case 3:
                printf("\tenter the number:");
                scanf("%d",&n);
                if(n%2==0)
                    printf("\t%d is even number.",n);
                else
                    printf("\t%d is odd number.",n);
                break;
            case 4:
                printf("\n\tYou choose to EXIT.\n");
                return 0;
            default :
                printf("\n\tEnter again!!!!\n");
        }
    }
    return 0;
}
