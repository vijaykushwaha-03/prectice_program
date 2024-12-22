#include <stdio.h>

int neibour(int arr[],int n)
{
    
    if(n == 1)
        return 0;
    if(arr[0] >= arr[1])
        return 0;
    if(arr[n-1] >= arr[n-2])
        return arr[n-1];
        
    for(int i=0; i<=n; i++)
    {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
        return arr[i];
    }
}
 