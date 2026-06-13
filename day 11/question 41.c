#include <stdio.h>

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 15, y = 30, ans;
    ans = findMax(x, y);
    printf("%d", ans);
    return 0;
}