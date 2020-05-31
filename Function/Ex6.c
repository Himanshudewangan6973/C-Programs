/*Write a program to find all prime numbers between given interval using functions.*/
#include<stdio.h>
void prime(int a,int b)
{
    for(int j = a; j <= b; j++) {
            int  p = 1;
            for(int i = 2; i < j; i++){
                if(j%i == 0){
                    p = 0; break;
                }
            }
            if(p == 1) printf("%d ", j);
        }
}
int main()
{
    int a,b;
    printf("Enter the interval: ");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
