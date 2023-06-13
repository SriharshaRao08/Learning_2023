/* Program to Find Largest of Two numbers(Using if else) */ 
   
#include <stdio.h>  
   
int main() {  
    int num1, num2;  
    printf("Please Enter Two Numbers\n");  
    scanf("%d %d", &num1, &num2);  
    
    if(num1 > num2) 
    {
        printf("%d is Largest Number\n", num1);          
    } 
    else if (num2 > num1)
    { 
        printf("%d is Largest Number\n", num2);  
    } 
    else 
    {
	printf("Both Numbers are Equal\n");
    }
   
    return 0;  
}


/* Program to Find Largest of Two numbers(Using ternary operator) */ 

#include<stdio.h>

int main()
{
    int num1,num2,max;
 
    printf("Please Enter Two Numbers\n ");
    scanf("%d%d", &num1, &num2);
 
    max = num1>num2 ? num1 : num2;
    printf("Largest of Two number is %d \n", max);
    return 0;
}