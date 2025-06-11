//  program to find volume of cylynder and taking input from user
// formula for volume of cylnder is volume=pi*r*r*hight
#include <stdio.h>
int main()
{
    int radius;
    int hight;
    float volume;
    printf("\n enter the radius of the cylynder");
    scanf("%d",&radius);
    printf("\n enter the hight of cylynder");
    scanf("%d",&hight);
    volume=3.14*radius*radius*hight;
    printf("\n the volume of cylynder with radius %d and hight %d is %f",radius,hight,volume);
    return 0;
}