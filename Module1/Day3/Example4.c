#include <stdio.h>

int LargestNumber(int num) {
    int largest = 0;
    int a[4];
    a[0] = num / 1000;       
    a[1] = (num / 100) % 10; 
    a[2] = (num / 10) % 10;  
    a[3] = num % 10;         
    
    for (int i = 0; i < 4; i++) {
        int current= 0;
        
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                current = current * 10 + a[j];
            }
        }
        
        if (current > largest) {
            largest = current;
        }
    }
    printf("The largest number is %d\n", largest);
}

int main() {
    int x;
    printf("Enter a 4-digit number \n");
    scanf("%d", &x);
    LargestNumber(x);
    
    return 0;
}
