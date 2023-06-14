#include <stdio.h>

int main() {
    int arr[500] ;
    int size = sizeof(arr) / sizeof(arr[0]);
    int a,sum = 0;
    printf("Enter no. of integers ");
    scanf("%d",&a);

  
  for(int i = 0; i < a; ++i) {
     scanf("%d", &arr[i]);
  }
     
    for (int i = 0; i < a; i += 2) {
        sum += arr[i];
    }
    
    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////