#include <stdio.h>
#include <string.h>

struct name
{
    char firstName[20];
    char lastName[20];

} ;
struct nickName
{
    struct name varitoo;
    char nName[20];
} x1, x2;

int main()
{
    strcpy(x1.varitoo.firstName, "Harsh");
    strcpy(x1.varitoo.lastName, "Raj");
    strcpy(x1.nName, "Neelay");
    printf("Name is %s %s and Nick Name is %s", x1.varitoo.firstName, x1.varitoo.lastName, x1.nName);

return 0;
}

