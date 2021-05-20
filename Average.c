#include <stdio.h>

int main()
{
	int n, arr[n], i;
	float sm = 0.0;
    printf("Enter Length Of Array\n");
    scanf("%d", &n);

    printf("Enter Elements Of array\n");
    	for (i = 0; i < n; i++)
    	{
        	scanf("%d", &arr[i]);
    	}

    printf("Our Array is ");
    	for (i = n-1 ; i >= 0 ; i--)
    	{
        	printf("%d ", arr[i]);
    	}
		for (i=0; i <n; i++)
		{
				sm = sm + arr[i];
		}
	printf("\nAverage of element of array is %f", sm/n);

}
