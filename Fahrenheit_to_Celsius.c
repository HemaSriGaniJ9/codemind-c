#include<stdio.h>
int main()
{
    float fahrenheit;
    scanf("%f",&fahrenheit);
    float celsius;
    celsius=(fahrenheit-32)*5/9;
    printf("%0.2f",celsius);
    
}