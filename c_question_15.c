// Program to print multiplication table in reverse order
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    for (i = 10; i; i--)
    {
        printf("%dX%d=%d \n", n, i, n * i);
    }

    return 0;
}