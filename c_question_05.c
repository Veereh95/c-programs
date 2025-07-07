// program to calculate simple intrests
// formula for simple intres is given by simple intrest=(principl*intrest*time)/100
#include <stdio.h>
int main()
{
    int principle,time,intrest;
    float simple_intrest;
    printf("\n enter the priciple ammount");
    scanf("%d",&principle);
    printf("\n enter the time duration in years");
    scanf("%d",&time);
    printf("\n enter the rate of intrest in percentage");
    scanf("%d",intrest);
    simple_intrest=(principle*intrest*time)/100;
    printf("\n the simple intrest is %f",simple_intrest);
    return 0;
}

