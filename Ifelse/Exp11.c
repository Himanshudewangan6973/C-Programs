#include<stdio.h>
int main(){
int age;
char ms,gender;
printf("Enter the marital status(m/u) and gender(M/F):\n");
printf("Marital status(m/u)=");
scanf("%c",&ms);
printf("\nAge=");
scanf("%d",&age);
printf("\nGender(M/F)=");
scanf(" %c",&gender);
if(ms=='u'){
        if(gender=='M'){
            if(age>30)
            {printf("\nDriver ensured");}
            else
                {printf("\nDriver not ensured");}
            }
        else
            {
            if(age>25){printf("\nDriver ensured");}
            else
                {printf("\nDriver not ensured");}
            }
            }
else
    {printf("\nDriver not insured");}
return 0;
}
