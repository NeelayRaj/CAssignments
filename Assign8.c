#include <stdio.h>

void array()
{
    int n, arr[n], i;
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
}

void Reverse()
{
    int n, arr[n], i;
        printf("Enter Length Of Array\n");
        scanf("%d", &n);

        printf("Enter Elements Of array\n");
    	    for (i = 0; i < n; i++)
        	    scanf("%d", &arr[i]);

    printf("Our Array is ");
    	for (i = n-1 ; i >= 0 ; i--)
        	    printf("%d ", arr[i]);
}
void Sum()
{
    int n, arr[n], i;
	int sm = 0;
        printf("Enter Length Of Array\n");
        scanf("%d", &n);

        printf("Enter Elements Of array\n");
    	    for (i = 0; i < n; i++)
        	    scanf("%d", &arr[i]);

        printf("Our Array is ");
    	    for (i = n-1 ; i >= 0 ; i--)
        	    printf("%d ", arr[i]);
		    for (i=0; i <n; i++)
				sm = sm + arr[i];
	printf("\nSum of element of array is %d", sm);
}
void Average()
{
    int n, arr[n], i;
	float sm = 0.0;
        printf("Enter Length Of Array\n");
        scanf("%d", &n);

        printf("Enter Elements Of array\n");
    	    for (i = 0; i < n; i++)
        	    scanf("%d", &arr[i]);
        printf("Our Array is ");
    	    for (i = n-1 ; i >= 0 ; i--)
        	    printf("%d ", arr[i]);
		    for (i=0; i <n; i++)
				sm = sm + arr[i];
	printf("\nAverage of element of array is %f", sm/n);
}
void Insert()
{
    int n, arr[n], i, p, v;
    printf("Enter Length Of Array\n");
    scanf("%d", &n);

    printf("Enter Elements Of array\n");
    	for (i = 0; i < n; i++)
        	scanf("%d", &arr[i]);
    printf("Our Array is ");
    	for (i = 0; i < n ; i++)
        	printf("%d ", arr[i]);
    printf("Enter Postion You want to Insert\n");
    scanf("%d", &p);	
    	
    if(p>0 && p<=n+1)
    	{
    		for(i = n-1; i >= p-1; i--)
    				arr[i+1]=arr[i];
		printf("Value OF Element you want to insert\n");
		scanf("%d", &v);
			arr[p-1]= v;		
    			
		}else{
			printf("Position Of array is Out Of Range\n");
		}
		printf("Array after Insertion is ");
    	for (i = 0; i < n+1 ; i++)
        	printf("%d ", arr[i]);
}
void Delete()
{
		int n, arr[n], i, d;
		printf("Enter Length Of Array\n");
    	scanf("%d", &n);

    	printf("Enter Elements Of array\n");
    	for (i = 0; i < n; i++)
        	scanf("%d", &arr[i]);

    	printf("Array is ");
    	for (i = 0; i < n ; i++)
        	printf("%d ", arr[i]);
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
void Asc()
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

void main()
    {
		int sw, c;
    	do
		{
	    printf("**************  Welcome To Array World ***************\n");
        printf("Select the operation which you want to perform on an array\n");

        printf(">>>>> Array ------------> 1\n");
        printf(">>>>> Reverse ----------> 2\n");
        printf(">>>>> Sum --------------> 3\n");
        printf(">>>>> Average ----------> 4\n");
        printf(">>>>> Insert -----------> 5\n");
        printf(">>>>> Delete -----------> 6\n");
        printf(">>>>> Ascending Order --> 7\n");
		
		
			 scanf("%d", &sw);

        	switch (sw)
        	{
        	case 1: array();
            	break;
       	 	case 2: Reverse();
           	 	break;
        	case 3: Sum();
            	break;
        	case 4: Average();
            	break;
        	case 5: Insert();
           		break;
        	case 6: Delete();
            	break;
        	case 7: Asc();
            	break;     
        	default: printf("Out Of Range , Enter Number between 1 to 7");
            	break;
        	}
			printf("\nDo you want to perform the operation again? \n If Yes press 1 Else press 2\n");
			scanf("%d", &c);
		} 
		while (c == 1);
		 
       
    }
