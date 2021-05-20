#include <stdio.h>

int main()

{
	int n;
	printf("Enter Dimension of 2D array N*N\n");
	scanf("%d", &n );
	int i, j, arr[n][n];
	
	printf("Enter Element of Array");
	
	for(i=0 ; i < n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("2D array of N*N is\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
