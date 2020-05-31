/*The current year and the year in which the employee is input through the keyboard.Write a program to check whether the employee
is given bonus or not*/
#include<stdio.h>
int main (){
    int y,jy,yos,bonus;
    printf("Enter the current year and joining year =");
    scanf("%d%d",&y,&jy);
    yos=y-jy;
    if(yos>3)
        bonus=2500;
        else
        bonus=0;
        printf("Bonus of Rs %d is given to the employee",bonus);
    return 0;
    }
