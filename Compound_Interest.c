#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    float r,t,ci;
    scanf("%d%f%f",&p,&r,&t);
    ci=p*pow((1.0+r/100),t)-p;
    printf("%0.2f",ci);
}