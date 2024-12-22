// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n=5;
    
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(j==1||i==j||i==n)
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