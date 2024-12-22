// Online C compiler to run C program online
#include <stdio.h>

int missing(int arr[],int n)
{
    int res = 0;
    
     for(int i=0; i<n; i++)
     {
         for(int j=0; i<n; j++)
         {
             if(i != j && arr[i] == arr[j])
             {
                 break;
             }
             if(j == n)
             {
                 res++;
             }
         }
     }
     return res;
    
}
int main() {
    // Write C code here
    int arr[] = {1,2,2,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("%d",missing(arr,n));

    return 0;
}