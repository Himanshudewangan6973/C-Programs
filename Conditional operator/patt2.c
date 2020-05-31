#include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if (j==5|| (i==2 && j==4) || (i==3 && j>=3)|| (i==4 && j>=2)|| (i==5))
            {
                printf("%d",j<=5-i);
            }
            else
            {
                printf(" ");
            }
        }
   printf("\n");
   }
   return 0;
}
