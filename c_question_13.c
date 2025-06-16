// program to find greatest of four number enterd by the user.
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    printf("enter the value of d\n");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("\n a is greater");
    }
    else if(b>a && b>c && b>d){
        printf("\n b is greater");
    }
    else if(c>b && c>a && c>d){
        printf("\n c is greater");
    }
    else
    printf("\n d is greater");
    return 0;
}