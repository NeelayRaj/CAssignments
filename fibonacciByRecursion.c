#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    return 0;
    if (n == 1 || n==2)
    return 1;
    else
    return (fib(n-1)+ fib(n-2));
}
int main()
{
    int n,i;
    printf("No. Of Fibonacci to print ");
    scanf("%d", &n);
    printf("Fib Numbers are \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
}