/*program to determine wether the student has passed or failed to pass 
total of 40% and 33% in each subject take marks inpur from the user*/
#include <stdio.h>
int main()
{
    int phy,che,maths;
    printf("enter the marks of physics\n");
    scanf("%d",&phy);
     printf("enter the marks of chemistry\n");
    scanf("%d",&che);
     printf("enter the marks of maths\n");
    scanf("%d",&maths);
    printf("your marks in physics %d chemistry %d and maths %d",phy,che,maths);
    if(phy<33 || che<33 || maths<33){
        printf("you faild in individual subject(s)");
    }
    else if(((phy+che+maths)/3)<40){
        printf("you faild due to less percentage");
    }
    else
    printf("you passed");
    return 0;
}