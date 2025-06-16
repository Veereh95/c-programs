/* program to check the enterd letter is lower case or not
 logic every word in a keyboard have there individual ASSCI value
 logic: if character>=97 && character<=122*/
#include <stdio.h>
int main()
{
    char ch;
    printf(" enter the charecter\n");
    scanf("%c",&ch);
    printf("the value of chrecter is %d\n",ch);
    if(ch>=97 && ch<=122){
        printf("the enetrd letter is lower case\n");
    }
    else
    printf("the enterd letter is lower case\n");
    return 0;
}