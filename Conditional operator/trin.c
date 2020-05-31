/*Printing a square.*/
#include<stdio.h>
int main ()
{
   int r,c;
   for (r=0;r<=4;r++)
   {
       for (c=0;c<=4;c++)
       {
           if (r==0|| c==0 || c==4 || r==4 )
           printf("*");
           else
            printf(" ");
       }
       printf("\n");
   }
   return 0;
}
