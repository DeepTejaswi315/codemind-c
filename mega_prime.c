#include <stdio.h>
int is_prime(int n)
{
    int i,fc=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
	
}
int main()
{
    int n,i,r;
    scanf("%d",&n);
    int t=n;
    int fc=0;
    int c=0;
    while(n!=0)
    {
    	r=n%10;
    	c++;
    	if(r!=1 && is_prime(r)==1){
    	    fc++;
    	}
		n=n/10;
	}
	if(fc==c && is_prime(t)==1)
	{
		printf("Mega Prime");
	}
	else
	{
		printf("Not Mega Prime");
	}
}