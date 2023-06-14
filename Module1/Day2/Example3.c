#include <stdio.h>

int main() {
    int arr[500] ;
    int size = sizeof(arr) / sizeof(arr[0]);
    int a,sum = 0;
    printf("Enter the size ");
    scanf("%d",&a);

  
  for(int i = 0; i < a; ++i) {
     scanf("%d", &arr[i]);
  }
     
    for (int i = 0; i < a; i += 2) {
        sum += arr[i];
    }
    
    printf("Sum = %d\n", sum);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    int size, num, sum = 0;

    printf("Enter the size ");
    scanf("%d", &size);


    for (int i = 0; i < size; i++) {
        scanf("%d", &num);

        if (i % 2 == 0) {
            sum += num;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
