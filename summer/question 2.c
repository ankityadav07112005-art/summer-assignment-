#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    // Standard loop running from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}