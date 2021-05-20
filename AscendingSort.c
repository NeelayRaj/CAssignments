#include <stdio.h>

int main()
{
	int n, i, j, arr[n],temp;
    printf("Enter Length Of Array\n");
    scanf("%d", &n);
    printf("Enter Elements Of array\n");
    	for (i = 0; i < n; i++)
    	scanf("%d", &arr[i]);
    	
    	printf("Our Array is ");
    	for (i = 0; i < n ; i++)
        	printf("%d ", arr[i]);
    	
    	for(i=0; i<n; i++)
    	{
    		for(j=0; j<n-1-i; j++)
    			{
    				if(arr[j]>arr[j+1])
    				{
    					temp = arr[j];
    					arr[j] = arr[j+1];
    					arr[j+1] = temp;
					}
				}
		}
		printf("Array After Sorting is\n");
    	for (i = 0; i < n ; i++)
    	printf("%d ", arr[i]);
    	
}
