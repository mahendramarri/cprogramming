#include<stdio.h>

int main()
{
    int number;
    printf("Enter Nunber of Days : ");
    scanf("%d",&number);

    if(number <= 5)
        printf("Your Fine is 0.50 Paise\n\n");
    else if(number > 5 && number <= 10)
        printf("Your Fine is Re. 1\n\n");
    else if(number > 10 && number <= 30)
        printf("Your Fine is Rs. 5\n\n");
    else
        printf("Sorry, Your Membership is Cancelled\n\n");

    return 0;
}
