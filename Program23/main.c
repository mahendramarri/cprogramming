#include <stdio.h>

int main()
{
    int sub_a, sub_b;

    printf("Please enter your marks for subject A : ");
    scanf("%d", &sub_a);

    printf("Please enter your marks  for subject B : ");
    scanf("%d", &sub_b);

    if((sub_a >= 55 && sub_a <= 65) && (sub_b >= 45 && sub_b <= 55)) {
        printf("\nYou are allowed1\n\n");
    }
    else if((sub_a >= 45  && sub_a <= 55) && sub_b >= 55) {
        printf("\nYou are allowed2\n\n");
    }
    else if(sub_a >= 65 && sub_b < 45) {
        printf("\nYou have allowed to reappear in an examination in B to qualify\n\n");
    }
    else {
        printf("\nSory, you have failed\n\n");
    }

    return 0;
}
