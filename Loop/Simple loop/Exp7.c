/*Write a program to enter the numbers till the user wants and at the end it should display the count of positive,
 negative and zeros entered.(ODD LOOP)*/
 #include<stdio.h>
 int main()
 {
     int pos=0,neg=0,zero=0,num;
     char ans='Y';
     while(ans=='Y' || ans=='y')
     {
         printf("Enter a Number: ");
         scanf("%d",&num);
         if(num>0)
            pos++;
         if(num<0)
            neg++;
         if(num==0)
            zero++;
         printf("Do you want to enter more numbers ? (Y/N): ");
         scanf(" %c",&ans);
     }
     printf("\n Number of Zeros = %d",zero);
     printf("\n Number of Positive Numbers = %d",pos);
     printf("\n Number of Negative Numbers = %d",neg);
     return 0;
 }
