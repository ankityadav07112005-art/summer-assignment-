#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for(i = 1; i <= num; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}