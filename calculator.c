/*
* File : calculator.c
* Program By : P.C Roy
* Date : 08-05-2015
*/
// call to the header file
# include <stdio.h>

// main function
int main()
{
    // initialize math_term variable
    char math_term;
    // initialize num1, num2, total variable
    float num1, num2, total;

    printf("Hello Programmer! I'm not too much intelligent, so please follow my instruction.\n");

    // the input operator should be +, -, * or /
    printf("Please enter math term(+, -, *, /) : ");
    scanf("%c",&math_term);

    // cursor wait for your first operand
    printf("Please enter first number : ");
    scanf("%f",&num1);

    // cursor wait for your second operand
    printf("Please enter second number : ");
    scanf("%f",&num2);

    // switch conditional statement
    switch(math_term) {
        case '+':
            // store the summation value in total variable
            total = num1+num2;
            // print the deserve output
            printf("Total summation of %.1f between %.1f is %.1f",num1, num2, total);
            break;
        case '-':
            // store the subtraction value in total variable
            total = num1-num2;
            // print the deserve output
            printf("Total subtraction of %.1f between %.1f is %.1f",num1, num2, total);
            break;
        case '*':
            // store the multiply value in total variable
            total = num1*num2;
            // print the deserve output
            printf("The multiply of %.1f between %.1f is %.1f",num1, num2, total);
            break;
        case '/':
            // store the divisional value in total variable
            total = num1/num2;
            // print the deserve output
            printf("The value of %.1f divide %.1f is %.1f",num1, num2, total);
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            printf("Error! operator is not correct");
            break;
    }
    return 0;
}
