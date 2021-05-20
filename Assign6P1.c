#include<stdio.h>
#include<conio.h>

int main()
    
    {
        int v, p, n , arr[n];
        int i;
        printf("Enter Size Of Array \n");
        scanf("%d" ,&n );

        printf("\nEnter %d elements of array \n", n);
        
        for( i = 0; i<n ; i++)
            {
                scanf("%d", &arr[i]);
            }
        
        p = 1; //Inserting Element at Starting Position
       
        for ( i = n-1; i >= p-1; i--)
            {
                arr[i+1] = arr[i];
            }

        printf("\nEnter the value of Element want to Insert at 1st Position \n");
        scanf("%d", &v);
        arr[p-1] = v;

      	printf("Array After Insertion\n");
        for( i=0 ; i <= n ; i++)        
            {
                printf(" %d", arr[i]);
            }  
    return 0;
    }
