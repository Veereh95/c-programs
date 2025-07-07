// program using recursion to calculate nth element of fibonaci series
#include <stdio.h>
int fib(int);
int fib(int n)
{
    if (n == 1 || n == 2)
    { // base condition
        return (n - 1);
    }
    return fib(n - 1) + fib(n - 2);
}
int main()

{
    int n;
    printf("enter the nth element \n");
    scanf("%d", &n);
    printf("the %dth element of fibonacci series is %d\n", n, fib(n));
    return 0;
}