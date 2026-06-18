#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int found = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 1) {
            break;
        }
    }
    return 0;
}