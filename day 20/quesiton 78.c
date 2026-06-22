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
    
    int flag = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    
    if(flag == 1) {
        printf("Symmetric\n");
    } else {
        printf("Not Symmetric\n");
    }
    
    return 0;
}