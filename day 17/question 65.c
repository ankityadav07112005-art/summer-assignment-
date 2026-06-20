#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i;
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        result[n1 + i] = arr2[i];
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int result[6];
    
    mergeArrays(arr1, 3, arr2, 3, result);
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}