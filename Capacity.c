#include<stdio.h>
int main()
{
    int t,s,b,c,k;
    scanf("%d%d%d%d",&t,&s,&b,&c);
    c=2*t*s*b*512;
    k=c/1024;
    printf("%d KB",k);
}