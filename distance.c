/*
* file name : distance.c
* date : 08-05-2015
* solved by : P.C ROY
*/

// call to library file
#include <stdio.h>

// declare the main function
int main()
{
    // initialize variable
    float s, u, t, a, temp1, temp2;

    // print a message for u
    printf("Please enter the value of u : ");
    // take the value of u from console
    scanf("%f", &u);

    // print a message for a
    printf("Please enter the value of a : ");
    // take the value of a from console
    scanf("%f", &a);

    // print a message for t
    printf("Please enter the value of t : ");
    // take the value of t from console
    scanf("%f", &t);

    // store the value of u and t into temp1 variable
    temp1 = u*t;

    // store the value of a and t into temp1 variable
    temp2 = .5*(a*t*t);

    // store the final value into s
    s = temp1 + temp2;

    /* print the deserved output
    * \n mean new line
    * .2f mean only print 2 digit after .(point)
    */
    printf("\nThe result of s = ut+1/2at^2 is : %.2f\n\n", s);

    return 0;
}
