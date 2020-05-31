#include<stdio.h>
int main()
{
    int phy,chem,math,bio,comp;
    float a;
    printf("Enter the marks of five subjects");
    scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&comp);
    a=(phy+chem+math+bio+comp)/5.0;
    if(a>=90)
        printf("Grade A,\n%%=%f",a);
    else if(a>=80)
        printf("Grade B,\n%%=%f",a);
    else if(a>=70)
        printf("Grade C,\n%%=%f",a);
    else if(a>=60)
        printf("Grade D,\n%%=%f",a);
    else if(a>=40)
        printf("Grade E,\n%%=%f",a);
    else if(a<40)
        printf("Grade F,\n%%=%f",a);
return 0;
}
