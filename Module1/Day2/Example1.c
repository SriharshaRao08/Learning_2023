// program to print exponent part of double variable in hexadecimal and binary format using Pointers

#include <stdio.h>
#include <stdint.h>

void printExponent(double *x) {
    uint64_t *p = (uint64_t *)x;
    uint64_t exponent = (*p >> 52) & 0x7FF;
    
    printf("Exponent in\n");
    printf(" hexadecimal: 0x%lX\n", exponent);
    printf(" binary: 0b");
    for (int i = 10; i >= 0; i--) 
    {
        printf("%d", (exponent >> i) & 0x1);
    }
}

int main() {
    double x;
    printf("Enter an number:\n");
    scanf("%lf",&x);
    printExponent(&x);

    return 0;
}
