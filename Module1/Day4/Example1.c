#include <stdio.h>

int main()
{
    int A[100], n, i, sum = 0;

    printf("Enter the number of elements \n ");
    scanf("%d", &n);
    printf("Enter the elements\n ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    printf("The sum of the array is : %d", sum);
    float avg = (float)sum / n;
    printf("\nThe average of the array is : %0.2f",avg );

    return 0;
}