// Online C compiler to run C program online
// #include <stdio.h>

// #include<stdlib.h>

void printDuplicates(int arr[], int n)
{
    printf("The duplicate elements are: ");
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] - 1;

        if (arr[index] < 0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            arr[index] = -arr[index];
        }
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 1, 3, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printDuplicates(arr, n);

    return 0;
}
