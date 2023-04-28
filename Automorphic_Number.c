#include <stdio.h>
int main()
{
	int n,num;
	long int sq;
	int r,t;
	int equal;
	scanf("%d",&n);
	num=n;
	sq=n*n;
	t=10;
	while(n>0)
	{
	r=sq%t;
	if(num==r)
	{
	equal=1;
	break;
	}
	n=n/10;
	t=t*10;
	}
	if(equal==1)
	{
		printf("Automorphic Number");
	}
	else
	{
		printf("Not an Automorphic Number");
	}
}