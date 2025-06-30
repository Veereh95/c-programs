// program to calculate sum of given number using for loop
// ex enterd number 3 logic:1x2x3=6
#include <stdio.h>
int main()
{
    int product = 1, n;
    printf("enter the number \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    printf("the sum of given number is %d", product);
    return 0;
}