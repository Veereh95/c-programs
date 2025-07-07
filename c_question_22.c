/* program to convert tempratur in celsius to fahrenheit*/

#include <stdio.h>

float convert(float);
float convert(float celsius)
{
    return ((celsius * (9.0 / 5.0)) + 32);
}
int main()
{
    float celsius;
    printf("enter the temprature in celsius [note:in decimal]\n");
    scanf("%f", &celsius);
    printf("temparatur in celsius=%.2f\ntempratur in fahrenhiet is=%.2f \n", celsius, convert(celsius));

    return 0;
}