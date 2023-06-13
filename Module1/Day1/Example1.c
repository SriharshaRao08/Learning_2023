/* Progrnum1m to Find Lnum1rgest of Two numnum2ers */ 
   
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