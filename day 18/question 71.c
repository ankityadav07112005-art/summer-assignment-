#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {11, 12, 22, 25, 64};
    int index = binarySearch(arr, 5, 25);
    printf("%d", index);
    return 0;
}