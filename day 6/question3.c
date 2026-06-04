#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter any integer: ");
    scanf("%d", &num);
    
    int originalNum = num;
    if (num < 0) {
        num = -num; 
    }
    
    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num = num / 2;
    }
    
    printf("Number of set bits in %d is: %d\n", originalNum, count);
    
    return 0;
}