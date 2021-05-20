int main()
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

        int sw; 
        scanf("%d", &sw);

        switch (sw)
        {
        case 1: printf("1");
            break;
        case 2: printf("2");
            break;
        case 3: printf("3");
            break;
        case 4: printf("4");
            break;
        case 5: printf("5");
            break;
        case 6: printf("6");
            break;
        case 7: printf("7");
            break;     
        
        default: printf("Out Of Range , Enter Number between 1 to 7");
            break;
        }
    }
