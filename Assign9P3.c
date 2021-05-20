#include <stdio.h>

int main()
{
    int i;
   	char name[100];
   	printf("this Program is to Get no of character in String .");
   	printf("\nEnter Word Here : ");
  	fgets(name, sizeof(name), stdin);
   	printf("\nYour Word is ");
   	puts(name);

  	for (i = 0; i < 101; i++)
  	{
      	if (name[i] == '\0')
      	break;
    }
  printf("\nNo Of character in Strings are %d", i-1);
return 0;
}
