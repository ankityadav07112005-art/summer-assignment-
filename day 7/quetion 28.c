#include <stdio.h>

int reversedNum = 0;

void reverseNumber(int n) {
    if (n == 0) {
        return;
    }
    reversedNum = reversedNum * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int num = 1234;
    reverseNumber(num);
    printf("Reversed number of %d is: %d\n", num, reversedNum);
    return 0;
}