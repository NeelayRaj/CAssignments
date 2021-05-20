#include <stdio.h>

int main ()
{
	printf("3*3 Array ");
	int n = 3;
	int i,j,arr[n][n];
	
	printf("Enter Element of 2D array\n");
	for(i=0; i<n; i++ )
	{
		for(j=0; j<n; j++)
			{
				scanf("%d", &arr[i][j]);
			}
	}
	printf("3*3 Array is\n");
	for(i=0; i<n; i++ )
	{
		for(j=0; j<n; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
	}
}
