#include<stdio.h>
int prime(int x)
{
	int i,y,rev=0,rr;
	y=x;
	while(x!=0)
	{
		i=x%10;
		rev=rev*10+i;
		x=x/10;
	}
         if(rev==y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,i,res,d1=0,d2=0,np=0,ap;
	scanf("%d",&n);
	for(i=n-1;;i--)
	{
	    if(prime(i))
		{
			np=i;
			break;
		}
	}
	for(i=n+1;;i++)
	{
	    if(prime(i))
		{
			ap=i;
			break;
		}
	}
	d1=n-np;
	d2=ap-n;
	if(d1==d2)                                                                                                   
	{
		printf("%d %d",np,ap);
	}
	else if(d1<d2)
	{
		printf("%d",np);
	}
	else
	{
	    printf("%d",ap);
    }
} 