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
    for(i=n-1; i>=0; i--)
    {
        if(arr[i]%2==0)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}