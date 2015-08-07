#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Please enter value of a : ");
    scanf("%d", &a);

    printf("Please enter value of b : ");
    scanf("%d", &b);

    result = (a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b);

    printf("\nResult of (a+b)^3 : %d\n\n", result);

    return 0;
}
