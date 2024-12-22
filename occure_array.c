// Online C compiler to run C program online
#include <stdio.h>

void maxmin(int arr[],int n,int x)
{
    int count = 0;
    
     for(int i=1; i<n; i++)
     {
         if(arr[i] == x)
         {
             count++;
         }          
     }
    
    printf("Element %d occur %d times \n",x,count);
     
}
int main() {
    // Write C code here
    int arr[] = {1,1,2,2,3,3,3,3,4,4,4,4,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    
     
    printf("Enter Number you find =>");
    scanf("%d",&x);
    
    maxmin(arr,n,x);

    return 0;
}