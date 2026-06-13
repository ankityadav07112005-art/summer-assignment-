#include <stdio.h>

int findSum(int a, int b) {
    int res;
    res = a + b;
    return res;
}

int main() {
    int x = 10, y = 20, ans;
    ans = findSum(x, y);
    printf("%d", ans);
    return 0;
}