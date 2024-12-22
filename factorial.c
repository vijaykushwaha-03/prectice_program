// factorial using Recursion

#include <stdio.h>

int factor(int n)
{
    if (n == 0)
        return 1;
        
    return n * factor(n - 1);
}
void main()
{
    int n;

    printf("Enter Number U want to chack Facto =>");
    scanf("%d", &n);

    printf("%d", factor(n));
}