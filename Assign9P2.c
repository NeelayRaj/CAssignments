#include <stdio.h>

int main()
{
	int n, arr[n], i, j;
    int dup = 0;
    printf("This Program is for finding No of Unique Elements in Array\n");
    printf("Enter Length Of Array\n");
    scanf("%d", &n);
    printf("Enter Elements Of array\n");
    	for (i = 0; i < n; i++)
    	{
        	scanf("%d", &arr[i]);
    	}
    printf("Our Array is ");
    	for (i = 0; i < n ; i++)
    	{
        	printf("%d ", arr[i]);
    	}
    for ( i = 0; i < n; i++)
        {
            for (j = i; j<n; j++)
            {
                if (i != j)
                {
                    if (arr[i] == arr[j])
                    {
                        dup++;
                        break;
                    }
                }
                
            }
            
        }
    printf("\nNo. Of Unique Elements are %d", n-dup);
return 0;
}