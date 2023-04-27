#include <stdio.h>
int main() 
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int t=i;
		int f=1;
		while(t)
		{
			int r=t%10;
			if(r==0||i%r!=0)
			{
				f=0;
				break;
			}
			t=t/10;
		}
		if(f==1)
		{
			printf("%d ",i);
		}
	}
}