#include <stdio.h>


int main()
{
    int add_result, sub_result, mult_result;
    float num1, num2;

    printf("Please enter fist number : ");
    scanf("%f", &num1);

    printf("Please enter second number : ");
    scanf("%f", &num2);

    add_result = round(num1+num2);
    printf("\nSubtract result : %d\n\n", add_result);

    add_result = round(num1-num2);
    printf("Addition result : %d\n\n", add_result);

    add_result = round(num1*num2);
    printf("Multiplication result : %d\n\n", add_result);


    return 0;
}

int addition(int num1, int num2)
{
    return (num1+num2);
}
