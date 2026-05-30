#include <stdio.h>

int main() {
    int num, originalNum, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }

    if (originalNum == reverse) {
        printf("The number is a palindrome\n");
    } else {
        printf("The number is not a palindrome\n");
    }

    return 0;
}