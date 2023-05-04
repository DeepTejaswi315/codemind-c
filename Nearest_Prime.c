#include <stdio.h>
int main()
{
	int m,j;
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		int n;
		scanf("%d",&n);
		int pp=n;
		while(1)
		{
			int fc=0;
			int i;
			for(i=1;i<=pp;i++)
			{
				if(pp%i==0)
				{
					fc++;
				} 
			}
			if(fc==2)
			{
				break;
			}
			pp--;
		}
		int np=n;
		while(1)
		{
			int fc=0;
			int i;
			for(i=1;i<=np;i++)
			{
				if(np%i==0) fc++;
			}
			if(fc==2)
			{
				break;
			}
			np++;
		}
		int res=n-pp<=np-n ? pp:np;
		printf("%d
",res);
	}
}