/*program to read the Roll No,Name,Marks*/

#include <stdio.h>

int main() {
    char roll_no[20];
    char name[50];
    float pmarks, mmarks, cmarks;
    float totalmarks, percentage;

    printf("Enter the Roll No: ");
    scanf("%s", roll_no);

    printf("Enter the Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter the Physics marks: ");
    scanf("%f", &pmarks);

    printf("Enter the Math marks: ");
    scanf("%f", &mmarks);

    printf("Enter the Chemistry marks: ");
    scanf("%f", &cmarks);

    totalmarks = pmarks + mmarks + cmarks;
    percentage = (totalmarks / 300) * 100;

    printf("\n--- Summary ---\n");
    printf("Roll No: %s\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", pmarks);
    printf("Math Marks: %.2f\n", mmarks);
    printf("Chemistry Marks: %.2f\n", cmarks);
    printf("Total Marks: %.2f\n", totalmarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
