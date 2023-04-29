#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l=0;
    while(n>0)
    {
    	int r=n%10;
    	if(r>l)
    	{
    		l=r;
		}
		n=n/10;
	}
	printf("%d",l);
}