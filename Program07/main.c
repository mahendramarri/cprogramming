#include <stdio.h>

//global variable
int n;

// calculate fibonacci number
int fibonacci(n)
{
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

/*
* main function
*/
int main()
{
    int i, upto = 7;

    printf("Please enter 1 number 1 to 7 : ");

    scanf("%d", &n);

    for(i = 2; i < upto; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
