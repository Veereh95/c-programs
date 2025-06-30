// program to calculate the sum of given number using while loop
#include <stdio.h>
int main()
{
    int product = 1, i = 0, n;
    printf("enter the number \n");
    scanf("%d", &n);
    while (i <= n)
    {
        product = product * i;
        i++;
    }
    printf("the sum is %d \n", product);
    return 0;
}