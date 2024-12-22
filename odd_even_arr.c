#include <stdio.h>

int minmix(int arr[], int n)
{
     printf("Original Array \n");
     for(int i=0; i< n; i++)
     {
         printf("%d ",arr[i]);
     }
     
     printf("\n Odd Numbers of Array \n");
     for(int i=0; i<n; i++)
     {
         if(arr[i] % 2 != 0)
         {
             printf("%d ",arr[i]);
         }
     }
      printf("\n Even Numbers of Array \n");
     for(int i=0; i<n; i++)
     {
         if(arr[i] % 2 == 0)
         {
             printf("%d ",arr[i]);
         }
     }
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    minmix(arr,n);
 

    return 0;
}
 