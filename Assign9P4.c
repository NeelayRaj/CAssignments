#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
   	char name[100];
   	printf("this Program is to Get no of character in String .");
   	printf("\nEnter Word Here : ");
  	fgets(name, sizeof(name), stdin);
   	printf("\nYour Word is ");
   	puts(name);
    len = strlen(name);

    printf("No. Of character in String is : %d", len-1);
  	
return 0;
}
