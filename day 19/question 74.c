#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    int a[100][100], b[100][100], diff[100][100];
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}