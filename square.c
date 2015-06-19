/*
* File : square.c
* Program By : P.C Roy
* Date : 08-05-2015
*/
// call to the header file
#include <stdio.h>
// main function
int main()
{
    // initialize math_term variable
    int a, b, result;

    printf("Please enter the value of a : ");
    scanf("%d", &a);

    printf("Please enter the value of b : ");
    scanf("%d", &b);

    result = (a*a)+(2*a*b)+(b*b);

    printf("\nThe result of (a+b)^2 is : %d \n\n", result);

    return 0;
}
