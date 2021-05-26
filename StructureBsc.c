#include <stdio.h>
#include <string.h>

struct first
{
    int a, b;
    char name[20];
    float cgpa;

} m1, m2 ;

int main()
{
    struct first m3 = {12, 32, "Atharv", 9.5};
    m1.a = 12;
    m1.b = 50;
    strcpy(m1.name, "Harsh");
    m1.cgpa = 9.5;

    printf("Name is %s", m1.name);
     printf("\n%s , %d , %d", m3.name, m3.a, m3.b);
    return 0;   
}
