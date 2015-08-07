#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number : ");
    scanf("%d", &number);

    if((number%2 == 0 || number%3 == 0) && (number%number == 0)){
        printf("Not\n");
    } else{
        printf("Prime\n");
    }

    return 0;
}
