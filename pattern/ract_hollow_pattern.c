// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n=5;
    
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 || i == n-1)
            {
                printf("*");
            }
            else if (j==0 || j == n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}