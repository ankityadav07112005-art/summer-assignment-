#include <stdio.h>

int main() {
    char str[100];
    char rev[100];
    int len = 0;
    int i, j;

    printf("Enter a string: ");
    gets(str);

    while(str[len] != '\0') {
        len++;
    }

    j = 0;
    for(i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0'; 

    printf("Reversed string: %s\n", rev);

    return 0;
}