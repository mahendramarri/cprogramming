#include <stdio.h>

int main()
{
    int i, result, temp_result = 0, range = 5;
    float number[4];

    for(i = 1; i <= range; i++){
        printf("Please enter the value of %d : ", i);
        scanf("%f", &number[i]);

        temp_result += number[i];
    }

    result = round(temp_result/range);

    printf("\nAverage of numbers is : %d\n", result);

    return 0;
}
