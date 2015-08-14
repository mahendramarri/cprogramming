#include <stdio.h>

void solve ( int number )
{

    int digits[10];
    int numberOfDigits;
    int power;
    int i;
    int j;


    numberOfDigits = 1 + (int)log10((double)number);


    for ( i = 0 ; i < numberOfDigits ; i++ )
    {
        power = pow(10.0,numberOfDigits-(i+1));
        digits[i] = number / power;
        number -= digits[i] * power;
    }


    for ( i = 0 ; i < numberOfDigits ; i++ )
    {
        for ( j = i ; j < numberOfDigits ; j++ )

        printf ( "%d" , digits[j] );
        printf ( "\n" );
    }
}

// main function
int main ( void )
{
    printf("Given an integer number of 4 digits.\n");
    solve ( 1232 );
    return 0;
}
