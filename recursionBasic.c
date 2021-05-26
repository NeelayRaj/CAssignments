#include <stdio.h>

int sum(int n)
{
    if (n != 0)
    {
        return n + sum(n-1);
    }
    else
    return n;
}

int main()
{
    int result , number;
    printf("Enter No. ");
    scanf ("%d", &number);

    result = sum(number);
    printf("Sum of %d natural number is %d ", number, result);

}