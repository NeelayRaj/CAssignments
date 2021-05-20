#include <stdio.h>
int main()
{
	int n, arr[n], i, d;
		printf("Enter Length Of Array\n");
    	scanf("%d", &n);

    	printf("Enter Elements Of array\n");
    	for (i = 0; i < n; i++)
    	{
        	scanf("%d", &arr[i]);
    	}

    	printf("Array is ");
    	for (i = 0; i < n ; i++)
    	{
        	printf("%d ", arr[i]);
    	}
		printf("Enter Postion You want to Delete\n");
    	scanf("%d", &d);	
    if(d>0 && d<n)
    	{
    			for(i = d-1 ; i < n-1; i++)
    				arr[i]=arr[i+1];
						
				printf("Array after Deleting Element is ");
    			for (i = 0; i < n-1 ; i++)
    			printf("%d ", arr[i]);	
		}
		else
			{
				printf("Position Of array is Out Of Range\n");
				
			}
		
}
