 #include <stdio.h>

int neibour(int arr[],int n)
{
    if(n == 1)
        return -1;
    if(arr[0] >= arr[1])
        return 0;
    if(arr[n-1] >= arr[n-2])
        return n-1;
        
    for(int i=1; i<n-1; i++)
    {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
            return i;
    }
    
    return -1;
    
}

int main()
{
    int arr[] = {1,3,20,4,1,0};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peak = neibour(arr,n);
    
    if(peak == -1)
        printf("No peak element found");
    else
        printf("Peak element is %d at index %d",arr[peak],peak);
    
    return 0;
}
 