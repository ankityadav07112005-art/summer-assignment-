#include <stdio.h>

void findCommon(int arr1[], int n1, int arr2[], int n2) {
    int visited[100] = {0};
    int i, j;
    
    for (i = 0; i < n2; i++) {
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j] && visited[j] == 0) {
                printf("%d ", arr2[i]);
                visited[j] = 1;
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 2, 3, 4};
    findCommon(arr1, 4, arr2, 4);
    return 0;
}