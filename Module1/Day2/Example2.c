// Code to swap two variables of any type using pointers

#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int num1,num2;
    
    printf("Enter Two Numbers\n");
    scanf("%d %d",&num1, &num2);
    printf("Before swapping: number1 = %d, number2 = %d\n", num1, num2);
    
    swap(&num1, &num2, sizeof(num1));
    printf("After swapping: number1 = %d, number2 = %d\n", num1, num2);

    
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void swap(void* a, void* b) {
    
    char* temp = (char*)a;
    char* temp2 = (char*)b;
    
    while (*temp != '\0') {
        char t = *temp;
        *temp = *temp2;
        *temp2 = t;
        temp++;
        temp2++;
    }
}

int main() {
    int num1,num2;
    
    printf("Enter Two Numbers\n");
    scanf("%d %d",&num1, &num2);

    printf("Before swap: a = %d, b = %d\n", num1, num2);

    // Swap the values using the swap function
    swap(&num1, &num2);

    printf("After swap: a = %d, b = %d\n", num1, num2);
    return 0;
}

