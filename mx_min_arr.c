// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here

    int i, min = 1, max = 1, arr[] = {1, 2, 3, 4, 5};

    for (i = 0; i < 5; i++)
    {
        printf(" %d", arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\n");
    printf(" Min is => %d ", min);
    printf("\n");
    
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf(" Maximum is => %d ", max);

    return 0;
}