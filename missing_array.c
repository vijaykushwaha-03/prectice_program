#include <stdio.h>

int missingNumber(int n, int arr[])
{
    // Calculate the sum of numbers from 1 to n
    int total = (n * (n + 1)) / 2;

    // Calculate the sum of the given array
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    // The missing number is the difference between the total and the sum
    return total - sum;

}

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", missingNumber(n, arr));
    return 0;
}