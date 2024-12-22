// Online C compiler to run C program online

#include <stdio.h>

void maxmin(int arr[], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    
}
int main()
{
    // Write C code here
    int arr[] = {1, 6, 7, 9, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxmin(arr, n);

    return 0;
}