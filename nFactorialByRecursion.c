#include <stdio.h>

int fact(int n)
{
    if (n<0)
    printf("Number Must be Greater than or Equal to Zero");
    if (n==0)
    return 1;
    if (n >= 1)
    {
        return n * fact(n-1);
    }
}
int main()
{
    int number, result;
    printf("Enter Number ");
    scanf("%d", &number);
    result=fact(number);
    if (number >= 0)
    printf("\nFactorial of %d is %d", number, result);
}