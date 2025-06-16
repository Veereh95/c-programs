/* program to check wether the enterd year is leap year or not
 logic if year is /4 ==0 && year/100 !=0 and year /400 ==0 is a leap year*/
#include <stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("the enterd year is leap year\n");
    }
    else
    printf("enterd year is not a leap year\n");
    return 0;
}