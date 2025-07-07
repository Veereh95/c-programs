// program using recursion to calculate sum of first n natural number
#include <stdio.h>
int sum_natural(int);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum_natural(n-1)+n;
}

int main()
{   int a;
    printf("enter the value of n \n");
    scanf("%d",&a);
    printf("the sum of n natural number is %d",sum_natural(a));
    
    return 0;
}