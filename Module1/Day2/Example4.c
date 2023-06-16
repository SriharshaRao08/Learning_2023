#include <stdio.h>

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int num,count=0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) 
    {
         num = arr[i];

        while (num != 0) 
        {
            count += num & 1;
            num >>= 1;
        }
        
    }

    printf("Total number of bits: %d\n", count);

    return 0;
}
