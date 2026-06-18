#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int newSize = 0;
    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for(int j = 0; j < newSize; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    for(int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}