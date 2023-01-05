#include<stdio.h>
int main()
{
    int n,sq;
   
    while(n!=1)
    {
     scanf("%d",&n);
     if(n==-1)
     {
         break;
     }
     sq=n*n;
     printf("%d
",sq);
    }
}