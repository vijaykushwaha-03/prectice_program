// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
     
     int arr[] = {1,2,3,4,4,2};
     int n = sizeof(arr) / sizeof(arr[0]);
     for(int i=0; i<n; i++)
     {
         for(int j=i+1; j<n; j++)
         {
             if(arr[i] == arr[j])
             {
                printf("First Repeat Element : %d",arr[i]);
             }
             break;
         }
                          

     }

    return 0;
}