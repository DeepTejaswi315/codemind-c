#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]); 
	}
	int lar=arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]>lar)
		{
			lar = arr[i];
		}
	}
	printf("%d ", lar);
}