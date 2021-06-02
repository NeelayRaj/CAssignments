//HCF By Recursion
#include <stdio.h>
int HCF(int a , int b)
{
    if (b != 0)
    return HCF(b , a % b);
    else
    return a;
}
int main()
{
    int a , b;
    printf("This function helps you to find HCF of Two numbers\n");
    printf("Enter First No. ");
    scanf("%d", &a);
    printf("Enter Second No. ");
    scanf("%d", &b);
    printf("HCF of Numbers %d and %d is %d.",a, b, HCF(a , b));
    return 0;
}