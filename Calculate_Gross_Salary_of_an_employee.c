#include<stdio.h>
int main()
{
    float basic,hra,da,pf,gross;
    scanf("%f%f%f",&basic,&hra,&da);
    pf=(0.12*basic);
    gross=basic+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gross);
}