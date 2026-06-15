#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1;
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        int next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}

int main() {
    int terms;
    scanf("%d", &terms);
    printFibonacci(terms);
    return 0;
}