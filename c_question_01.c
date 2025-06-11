// program for area of circle and taking input from user
// formula for area of circle pi*r*r
#include <stdio.h>
int main()
{   int radius;
    float area;
    printf("\n enter the radius of the circle");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("\n the area of circle of radius %d is %f",radius,area);
    return 0;
} 