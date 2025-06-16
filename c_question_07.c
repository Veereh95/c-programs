//program to chek wether the enterd number is divisible by 97 or not
#include <stdio.h>
int main()
{ 

    int number;
    printf ("enter the number");
    scanf("%d",&number);
    if (number/97)
    {
        printf("\n enterd number is divisible by 97");
    }
else
printf("\n enterd number is not divisiblre by 97");    
    return 0;
}