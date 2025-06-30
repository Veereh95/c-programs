// program to calculate the sum of the number occuring in the multiplication table
#include <stdio.h>
int main()
{
    int j,sum = 0;
    printf("enter the number of multiplication table\n");
    scanf("%d",&j);
    
    for (int i = 1; i <= 10; i++)
        sum = sum + (j * i);
    printf(" the sum of multiplication table is %d \n", sum);
    return 0;
}