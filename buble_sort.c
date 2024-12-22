// Online C compiler to run C program online
#include <stdio.h>

int bub(int a[] ,int n)
{
    int tmp;
    
    printf("\n BEFORE SORTING \n");
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    
        // Bubble sorting
        
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
     printf("\n AFTER SORTING \n");
    for(int i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
}

int main() {
     
    int a[10],n;
    
    printf("Enter Size of Array=>");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        printf("Enter Number %d =>",i+1);
        scanf("%d",&a[i]);
    }
    
    bub(a,n);
    return 0;
}