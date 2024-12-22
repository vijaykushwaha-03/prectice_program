// Online C compiler to run C program online
#include <stdio.h>

int removedupli(int arr[],int n)
{
    if( n == 0 || n== 1)
        return n;
    int j=0;
    
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    
    arr[j++] = arr[n -1];
    
    return j;
    
}

int main() {
    // Write C code here
    int arr[] = {1,2,3,4,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
     n = removedupli(arr,n);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}