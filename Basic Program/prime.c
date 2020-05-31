#include<stdio.h>
int main()
{
    int a,i,flag=0;
scanf ("%d",&a);
for(i=a-1;i>0;i--){
        if (a%i==0){
            flag=1;
        break;}
}
if(flag==1)
    printf("not a prime no. %d",a);
else
    printf("prime no. %d",a);
return 0;
}
