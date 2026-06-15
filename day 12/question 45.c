#include <stdio.h>

int isPalindrome(int n) {
    int temp = n;
    int rev = 0;
    while (temp > 0) {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}