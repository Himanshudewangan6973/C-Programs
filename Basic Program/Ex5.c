/*Lenght and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area
 & perimeter of the rectangle, and the area and circumference of the circle.*/
 #include<stdio.h>
 int main(){
     int l,b,r,area_rect,peri;
     float a_circle,circum;
     printf("Enter the values for rectangle:");
     printf("\nLength=");
     scanf("%d",&l);
     printf("Breadth=");
     scanf("%d",&b);
     printf("\nEnter the value of radius of circle:");
     scanf("%d",&r);
     area_rect=l*b;
     peri=2*(l+b);
     a_circle=3.14*r*r;
     circum=2*3.14*r;
     printf("\nArea of rectangle is:%d\t\t",area_rect);
     printf("Area of circle is:%.2f\n",a_circle);
     printf("Perimeter of rectangle is:%d\t",peri);
     printf("Circumference of circle is:%.3f",circum);
     return 0;
 }
