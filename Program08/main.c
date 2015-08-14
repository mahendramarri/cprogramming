#include <stdio.h>

// GLOBAL VARIABLE
int i, given_num[6] = {1,2,3,4,5,6};

// find the even number
int even_number() {

    printf("Even : ");
    for(i = 0; i < 6; i++) {

        if(given_num[i]%2 == 0) {

            printf("%d ", given_num[i]);

        }
    }
    printf("\n");

}

// find the odd number
int odd_number() {

    printf("Odd : ");
    for(i = 0; i < 6; i++) {

        if(given_num[i]%2 != 0) {

            printf("%d ", given_num[i]);

        }
    }
    printf("\n");

}


// main function
int main()
{
    even_number();
    odd_number();

    return 0;
}
