#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i,c=0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			c++;
		}
	}
	if(c==n)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
}