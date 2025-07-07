/* program to calculte force of attraction
 using function taking the mass input from the user*/
#include <stdio.h>

float force(float);
float force(float n)
{
    return (n * 9.8);
}
int main()
{
    float mass;
    printf("enter the mass of the object \n");
    scanf("%f", &mass);
    printf("the force of attarction of body mass %f is %f", mass, force(mass));

    return 0;
}