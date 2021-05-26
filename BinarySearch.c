#include <stdio.h>

int binsearch(int biar[], int siz, int x)
{
    int i;
    if(biar[siz/2] < x)
    {
        for ( i = siz/2; i < siz; i++)
        {
            if (biar[i] == x)
            return i;
        }
        return -1;
    }
    if (biar[siz/2] > x)
    {
        for(i=0; i <= siz/2; i++)
        {
            if(biar[i] == x)
            return i;
        }
        return -1;   
    }
}
int main()
{
    int n, arr[n], i, search, result;
    printf("Enter Length Of Array\n");
    scanf("%d", &n);

    printf("Enter Elements Of array\n");
    printf("Array Should Be in Ascending Order\n");
    	for (i = 0; i < n; i++)
    	{
        	scanf("%d", &arr[i]);
    	}

    printf("Our Array is ");
    	for (i = 0; i < n ; i++)
    	{
        	printf("%d ", arr[i]);
    	}
    //sort(&arr,n); 
    printf("\nEnter Element To Search\n");
    scanf("%d", &search);
    result = binsearch(arr,n,search);
    if(result==-1)
    printf("No Elements Found");
    else
    printf("Element %d present at %d", search, result);
    return 0;
}