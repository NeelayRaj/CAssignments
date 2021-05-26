#include <stdio.h>

int linearSearch(int arry[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if (x == arry[i])
        return i;
    }
    return -1;    
}
int main()
{
    int nm;
    printf("Enter Length Of Array\n");
    scanf("%d", &nm);
    int arr[nm], xm , result, i;
    printf("Enter Elements Of array\n");
    	for (i = 0; i < nm; i++)
    	{
        	scanf("%d", &arr[i]);
    	}
    printf("Our Array is ");
    	for (i = 0; i < nm ; i++)
    	{
        	printf("%d ", arr[i]);
    	}
    printf("\nEnter element to search\n");
    scanf("%d", &xm);
    result = linearSearch(arr,nm, xm );
    if (result == -1)
    {
        printf("Element Not Found");
    }else{
    printf("Element %d present at index %d", xm, result);
    }
}