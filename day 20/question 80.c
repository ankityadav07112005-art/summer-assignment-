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
    
    for(int j = 0; j < c; j++) {
        int csum = 0;
        for(int i = 0; i < r; i++) {
            csum = csum + a[i][j];
        }
        printf("%d\n", csum);
    }
    
    return 0;
}