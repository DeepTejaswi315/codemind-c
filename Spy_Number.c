#include <stdio.h>
int main()
{
	int n,i,r;
 	scanf("%d",&n);
 		int sum=0,pro=1;
 		while(n>0)
 		{
 			r=n%10;
 			sum+=r;
 			pro*=r;
 			n=n/10;
		}
		if(sum==pro)
		{
			printf("Spy Number");
		}
		else
		{
		    printf("Not Spy Number");
		}
}