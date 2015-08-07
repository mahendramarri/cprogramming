#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Please enter three number using tab : ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 < num2){
        if(num1 < num3){
            printf("%d is th smallest number.\n", num1);
        } else {
            printf("%d is th smallest number.\n", num3);
        }
    } else {
        if(num2 < num3){
            printf("%d is th smallest number.\n", num2);
        } else {
            printf("%d is th smallest number.\n", num3);
        }
    }

    return 0;
}
