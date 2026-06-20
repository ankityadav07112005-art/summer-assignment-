#include <stdio.h>

void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    int i, j, k, flag;
    
    for (i = 0; i < n1; i++) {
        flag = 0;
        for (j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) continue;
        
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 3, 4, 5};
    printIntersection(arr1, 4, arr2, 4);
    return 0;
}