#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,img;
    printf("Enter values of a,b,c of quadratic equation :");
    scanf(" %d %d %d",&a,&b,&c);
    printf("\n");
    f=(b*b-4*a*c);
    switch(f>0)
    {
    case 1:
        d=(-b+sqrt(f))/(2*a);
        e=(-b-sqrt(f))/(2*a);
        printf("Two real and distinct roots exist: %.2f & %.2f",d,e);
        break;
    case 0:
        switch(f<0)
        {
        case 1:
            d=e=-b/(2*a);
            img=sqrt(f)/(2*a);
            printf("Two distinct complex roots exist: %.2f + i%.2f and %.2f - i%.2f",d,img,e,img);
            break;
        case 0:
            d=e=-b/(2*a);
            printf("Two equal and real roots exist: %.2f & %.2f",d,e);
            break;
        }
    }
    return 0;
}
