int main()
{
	int n, arr[n], i, p, v;
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
    printf("Enter Postion You want to Insert\n");
    scanf("%d", &p);	
    	
    if(p>0 && p<=n+1)
    	{
    		for(i = n-1; i >= p-1; i--)
    			{
    				arr[i+1]=arr[i];
				}
		printf("Value OF Element you want to insert\n");
		scanf("%d", &v);
			arr[p-1]= v;		
    			
		}else{
			printf("Position Of array is Out Of Range\n");
		}
		printf("Array after Insertion is ");
    	for (i = 0; i < n+1 ; i++)
    	{
        	printf("%d ", arr[i]);
    	}
		
}
