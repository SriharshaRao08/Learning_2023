#include <stdio.h>

void printpat(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printspace(int n) {
    for (int i = 1; i <= 2 *n ; i++) {
        printf(" ");
    }
}

void printpat1(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}



int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        printpat(i);
        printspace(n - i);
        printpat1(i);
        printf("\n");
    }

    return 0;
}
