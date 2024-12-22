#include <stdio.h>

int second_largest(int arr[], int size)
{
    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main()
{
    int array[] = { 10, 20, 30, 40, 50, 60, 70 };
    int size = sizeof(array) / sizeof(array[0]);

    int second_largest_element = second_largest(array, size);

    printf("Second largest element is: %d\n", second_largest_element);

    return 0;
}
 