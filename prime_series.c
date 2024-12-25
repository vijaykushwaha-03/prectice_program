// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, flag = 0;

    printf("Enter Number =>");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        flag = 0;

        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}