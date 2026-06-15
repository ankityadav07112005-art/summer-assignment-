#include <stdio.h>

int isArmstrong(int n) {
    int temp = n;
    int count = 0;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    
    temp = n;
    int sum = 0;
    while (temp > 0) {
        int rem = temp % 10;
        int prod = 1;
        for (int i = 0; i < count; i++) {
            prod = prod * rem;
        }
        sum = sum + prod;
        temp = temp / 10;
    }
    
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    return 0;
}