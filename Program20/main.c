#include<stdio.h>

int main()
{
    int number;    int min=0,max=50;
    printf("Even numbers \t Odd numbers\n");
    for(number = min; number <= max; number++)
    if(number % 2 !=0){
        printf("\n\t\t\t%d",number);
    }
    else {
        printf("\n%d", number);
    }

    printf("\n\n");

    return 0;
}
