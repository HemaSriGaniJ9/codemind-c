#include<stdio.h>
int main()
{
    int n,rem;
    scanf("%d",&n);
    while(n>9)
    {
        rem=n%10;
        n=n/10;
        n=n+rem;
    }
    printf("%d",n);
}