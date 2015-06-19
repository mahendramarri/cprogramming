/*
 * File:   cube.c
 * Author: PC ROY
 *
 * Created on May 11, 2015, 1:31 AM
 */

#include <stdio.h>

/*
 * declare main function
 */
int main() {
    // initialize math_term variable
    int a, b, result;

    printf("Please enter the value of a : ");
    scanf("%d", &a);

    printf("Please enter the value of b : ");
    scanf("%d", &b);

    result = (a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b);

    printf("\nThe result of (a+b)^3 is : %d \n\n", result);

    return 0;
}
