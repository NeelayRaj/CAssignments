#include <stdio.h>
void strg(char str[]);
int main()
{
    char name[40];
    printf("Type Your Name to Scan\n");

    fgets(name, sizeof(name), stdin);
    printf("User Input is ");
    puts(name);
    strg(name);

    return 0;
}
void strg(char str[])
{
    printf("Function Output ");
    puts(str);
}