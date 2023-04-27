#include <stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int sq=n*n,sum=0;
    while(sq>0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
         printf("Not Neon Number");
    }
}