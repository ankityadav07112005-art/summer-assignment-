#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    float avg = (float)sum / n;
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    
    return 0;
}