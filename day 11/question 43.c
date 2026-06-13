#include <stdio.h>

int findFactorial(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int num = 5, ans;
    ans = findFactorial(num);
    printf("%d", ans);
    return 0;
}