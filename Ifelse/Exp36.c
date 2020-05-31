#include<stdio.h>
int main()
{
    int age,prem,policy;
    char health[10],gender[10],place[10];
    printf("Enter health(good/poor) :");
    scanf("%s",&health);
    printf("\nEnter age:");
    scanf("%d",&age);
    printf("\nEnter gender(male/female):");
    scanf("%s",&gender);
    printf("\nEnter place(city/village):");
    scanf("%s",&place);

    if((health=="good")&&(age>25)&&(age<35)&&(place=="city")&&(gender=="male"))
        printf("\nHis  Premium amount =Rs4/1000 & policy amount is less than Rs. 2 lakhs");

    else if(health=="good"&&age>25&&age<35&&place=="city"&&gender=="female")
        printf("\nHer  Premium amount =Rs3/1000 & policy amount is less than Rs. 1 lakhs");

    else if(health=="poor"&&age>25&&age<35&&place=="village"&&gender=="male")
        printf("\nHis  Premium amount =Rs6/1000 & policy amount is less than Rs. 10,000");

    else
        printf("\nPerson is not insured.\n");
    return 0;
}
