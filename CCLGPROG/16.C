#include <stdio.h>

int main() {
    int units;
    double billAmount = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        billAmount = units * 2.30;
    } else if (units <= 100) {
        billAmount = 50 * 2.30 + (units - 50) * 2.60;
    } else if (units <= 250) {
        billAmount = 50 * 2.30 + 50 * 2.60 + (units - 100) * 3.25;
    } else {
        billAmount = 50 * 2.30 + 50 * 2.60 + 150 * 3.25 + (units - 250) * 4.35;
    }

    printf("Bill Amount: Rs %.2lf\n", billAmount);

    return 0;
}
