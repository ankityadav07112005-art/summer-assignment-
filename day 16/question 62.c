#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxElement = arr[0];
    int maxCount = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    printf("%d", maxElement);
    return 0;
}