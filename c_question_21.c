/*program using function to find average of three numbers*/
#include <stdio.h>

float average(int, int, int);
float average(int a, int b, int c)
{
    return ((a + b + c) / 3);
}

int main()
{
    int num1, num2, num3;
    printf("enter the first number\n");
    scanf("%d", &num1);
    printf("enter the second number\n");
    scanf("%d", &num2);
    printf("enter the third number\n");
    scanf("%d", &num3);

    printf("the average of the number %d %d and %d is %.2f\n", num1, num2, num3, average(num1, num2, num3));

    return 0;
}