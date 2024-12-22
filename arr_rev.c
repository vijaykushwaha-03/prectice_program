// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   //  printf("Try programiz.pro");

    int i,rev[5] ,arr[] = {1,2,3,4,5};
    
    for(i=0; i<5; i++)
    {
        printf(" %d",arr[i]);
    }
    
    for(i=0; i<5; i++)
    {
        rev[i] = arr[5 - i - 1];
        
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        printf(" %d",rev[i]);
    }
    return 0;
}