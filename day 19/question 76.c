#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[100][100];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                sum = sum + a[i][j];
            }
        }
    }
    
    printf("%d\n", sum);
    return 0;
}