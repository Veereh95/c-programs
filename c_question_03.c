// area of rectangle taking input from user
// formula for area of recrangle is area=breadth*hight
#include <stdio.h>
int main()
{
    int breadth,hight;
    float area;
    printf("\n enter the breadth of the rectangle");
    scanf("%d",&breadth);
    printf("\n enter the hight of the rectangle");
    scanf("%d",&hight);
    area=breadth*hight;
    printf("\n the area of rectangle is %f",area);
    return 0;
}