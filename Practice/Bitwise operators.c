#include<stdio.h>
#include<conio.h>
int main(){
int a=10,b=3,c;
c=a|b;
printf("%d\n",c);
c=a&b;
printf("%d\n",c);
c=a^b;
printf("%d\n",c);
c=~a;
printf("%d\n",c);
c=~b;
printf("%d\n",c);
c=a<<b;
printf("%d\n",c);
c=a>>b;
printf("%d\n",c);
int e=80,d=4;
c=e>>d;
printf("%d\n",c);
return 0;
}
