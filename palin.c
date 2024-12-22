#include <stdio.h>

int main()
{
    int n, rem, rev = 0;

    // Step 1: Take input from the user
    printf("Enter Number to check =>");
    scanf("%d", &n);

    // Step 2: Store the original number for later comparison
    int tem = n;

    // Step 3: Reverse the number
    while (n != 0)
    {
        rem = n % 10;         // Extract the last digit
        rev = rev * 10 + rem; // Build the reversed number
        n = n / 10;           // Remove the last digit
    }

    // Step 4: Check if the original number matches the reversed number
    if (tem == rev)
        printf("Palindrome => %d", rev);
    else
        printf("Not a palindrome => %d", rev);

    return 0;
}
