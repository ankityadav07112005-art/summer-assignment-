#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    
    int a[100][100], b[100][100], res[100][100];
    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            res[i][j] = 0;
        }
    }
    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                res[i][j] = res[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}