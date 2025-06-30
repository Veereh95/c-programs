// program to sum first 10 natural number using while loop
#include <stdio.h>
int main()
{
    int i=0,n;
    int sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        i++;
    
    }
    printf("\n %d",sum);
    
    return 0;
}