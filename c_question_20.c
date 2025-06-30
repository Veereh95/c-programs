/*program to check wether the given number is prime or not
logic:a prime number can only be devided evenly by 1 and the number itself */

#include <stdio.h>
int main()
{
    int n = 11;
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
        }
    }
    if (prime)
    {
        printf("the number is prime \n", n);
    }
    else
    {
        printf(" the number %d is not prime", n);
    }

    return 0;
}