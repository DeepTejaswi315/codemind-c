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
    int target,count=0;
    scanf("%d", &target);
    for(i=0; i<n; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }
    printf("%d",count);
}