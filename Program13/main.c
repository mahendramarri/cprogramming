#include <stdio.h>

int main()
{
    int i, result, temp_result = 0, N;
    float number[4];

    printf("Please enter how many number you want to calculate the average : ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        printf("Please enter the value of %d : ", i);
        scanf("%f", &number[i]);

        temp_result += number[i];
    }

    result = round(temp_result/N);

    printf("\nAverage numbers is : %d\n", result);

    return 0;
}
