/*
* File: evenodd.c
* Name: P.C Roy
* Date: 06-05-2015
*/

#include <stdio.h>
/*
* define main function
* return type int
*/
int main()
{
    /*
    * initialize var_array variable with assigned values
    */
    int var_array[9] = {1,3,4,5,2,6,9,8,7};

    /*
    * declare variable i
    */
    int i;

    /*
    * checking even and odd number using for loop
    */
    for(i = 0; i <= 8; i++){
        /*
        * if mode 2 equal zero then its a even number else odd
        */
        if(var_array[i]%2 == 0){
            printf("\n Even number of %d ", var_array[i]);
        }else{
            printf("\n Odd number of %d ", var_array[i]);
        }
    }

    /*
    * return 0
    */
    return 0;
}
