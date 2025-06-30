// program to print multiplication table for a given number
#include <stdio.h>
int main()
{
    int i, j;
    printf("enter the value of n \n");
    scanf("%d", &j);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", j, i, j * i);
    }

    return 0;
}