#include <stdio.h>
int main()
{
	int num,n,flag=0;
	scanf("%d",&num);
	for(n=0;n<=num;n++)
	{
		if(n*(n+1)==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}