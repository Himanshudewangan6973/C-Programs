/*The distance between the two cities(in km) is input through the keyboard. Write a program to convert and print this distance in meters,
feet, inches and centimeters*/
#include<stdio.h>
int main(){
float d,m,f,i,cm;
printf("The distance between the two cities(in km) is:");
scanf("%f",&d);
m=d*1000;
/*
m=km*1000;
cm=m*100;
inch=cm/2.54;
feet=inch/12;
*/
f=d*3280.84;
i=d*39370.1;
cm=d*100000;
printf("\n",d);
printf("\nDistance in Meter=%.4f m\n",m);
printf("Distance in Feet=%.5f ft\n",f);
printf("Distance in Inches=%.3f inch\n",i);
printf("Distance in Centimeter=%2f cm\n",cm);
return 0;
}
