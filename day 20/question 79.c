#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    int a[100][100];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i = 0; i < r; i++) {
        int rsum = 0;
        for(int j = 0; j < c; j++) {
            rsum = rsum + a[i][j];
        }
        printf("%d\n", rsum);
    }
    
    return 0;
}