#include<stdio.h>
int main()
{
    int x,s,h;
    scanf("%d",&x);
    h=x/60;
    s=x%60;
    printf("%d Hour(s) %d Minute(s)",h,s);
}