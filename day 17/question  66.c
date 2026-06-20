#include <stdio.h>

void printUnion(int arr1[], int n1, int arr2[], int n2) {
    int i, j, flag;
    
    for (i = 0; i < n1; i++) {
        flag = 0;
        for (j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", arr1[i]);
        }
    }
    
    for (i = 0; i < n2; i++) {
        flag = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            for (j = 0; j < i; j++) {
                if (arr2[i] == arr2[j]) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0) {
            printf("%d ", arr2[i]);
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 3, 4, 5};
    printUnion(arr1, 4, arr2, 4);
    return 0;
}