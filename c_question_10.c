/* program to calculate the ammount of tax to pay based on income and tax percentage.
 2.5l to 5l=5%, 5l to 10l=20%, above 10l=30%*/
#include <stdio.h>
int main()
{
    int income,itax;
    printf("enter the income of yours\n");
    scanf("%d",&income);
    if(income>=250000 && income<=500000){
        itax=(income*5)/100;
        printf("your income is %d and tax rate is 5 percent and you have to pay tax ammount of %d",income,itax);
    }
    else if(income>=500000 && income<=1000000){
        itax=(income*20)/100;
        printf("your income is %d and tax rate is 20 percent and you have to pay tax ammount of %d",income,itax);
    }
    else if(income>=1000000){
        itax=(income*30)/100;
        printf("your income is %d and tax rate is 30 percent and you have to pay tax ammount of %d",income,itax);
    }
    else
    printf("you dont have to pay any tax beacuse your income is less then 2.5 lakhs\n");

    return 0;
}