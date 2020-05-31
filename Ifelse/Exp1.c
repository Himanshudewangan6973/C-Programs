#include<stdio.h>
int main (){
    int qty,dis=0;
    float price, tot;
    printf("Enter the quantities=");
    scanf("%d",&qty);
    printf("Enter the price=");
    scanf("%f",&price);
    if(qty>1000)
        dis=10;
        tot=(qty*price)-(qty*price*dis/100);
        printf("Total expenses is %f",tot);
        return 0;
        }
