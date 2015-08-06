#include <stdio.h>

int main()
{
    int i, result = 0, number[4], range = 5;

    for(i = 1; i <= range; i++) {
        printf("Please enter the value of %d : ", i);
        scanf("%d", &number[i]);

        result += number[i];
    }

    printf("\nThe resut of five number's is : %d \n", result);

    return 0;
}
