#include <stdio.h>
 
int main()
{
    int a[1000],i,n,min,max;
   
    printf("Enter the number of elements \n ");
    scanf("%d", &n);
 
    printf("Enter the elements  \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];
    max=a[0];
    
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		 if(max<a[i])
		  max=a[i];       
    }
     printf("Minimum is : %d \n",min);
     printf("Maximum is : %d \n",max);


    return 0;
}