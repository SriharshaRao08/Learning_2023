#include <stdio.h>

void Bits(int num) {
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int num;
    printf("Enter a 32-bit integer \n ");
    scanf("%d", &num);
    Bits(num);

    return 0;
}




