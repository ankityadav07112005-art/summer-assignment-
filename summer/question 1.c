#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Using a simple loop to calculate the sum
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}