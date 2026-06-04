#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;
    int i;
    
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter power (n): ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        result = result * x;
    }
    
    printf("%d raised to the power %d is: %lld\n", x, n, result);
    
    return 0;
}