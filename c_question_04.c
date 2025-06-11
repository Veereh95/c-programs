// program to convert celsious to fahrenheit
// formula to convert celsious to fahrenheit is  fahrenheit=(celsious*(9.0/5.0)+32.0)
#include <stdio.h>
int main()
{
    float c,f;
    printf("\n enter the temprature in sellsious");
    scanf("%f",&c);
    f=(c*(9.0/5.0)+32.0);
    printf("\n the temprature in fharenhiet is %f",f);
    
    return 0;
}