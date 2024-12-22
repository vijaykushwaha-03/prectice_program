
#include <stdio.h>

int main()
{
    
    int num, binary, decima = 0, rem, base = 1;

    printf("Enter Number =>");
    scanf("%d", &num);
    binary = num;

    while (num > 0)
    {
        rem = num % 10;
        decima = decima + rem * base;
        num = num / 10;
        base = base * 2;
    }

    printf("%d \n", binary);
    printf("%d", decima);

    return 0;

}