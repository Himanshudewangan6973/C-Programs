#include<stdio.h>
int main(){
int yos,sal,qual;
char gender;
printf("Enter the yos,qual(1/0),gender(M/F)");
scanf("%d%d %c",&yos,&qual,&gender);
if((gender=='M')&&(yos>=10)&&(qual=1))
sal=15000;
else if(((gender=='M')&&(yos>=10)&&(qual==0))||((gender=='M')&&(yos<10)&&(qual==1))||((gender=='F')&&(yos<10)&&(qual==1)))
    sal=10000;
else if((gender=='M')&&(yos<10)&&(qual=0))
    sal=7000;
else if((gender=='F')&&(yos>=10)&&(qual=1))
    sal=12000;
else if((gender=='F')&&(yos>=10)&&(qual=0))
    sal=9000;
else if((gender=='F')&&(yos<10)&&(qual=0))
    sal=6000;
    printf("Salary=%d",sal);
    return 0;
    }
