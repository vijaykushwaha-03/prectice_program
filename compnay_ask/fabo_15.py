// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
     
    int f1 = 0,f2 = 1,cnt= 0;
    
    int next = f1+f2;
    
    printf("%d  %d ",f1,f2);
    while(next < 15)
    {
        printf("%d ",next);
        f1 = f2;
        f2 = next;
        next = f1+f2;
    }

    return 0;
}