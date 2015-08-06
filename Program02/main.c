#include <stdio.h>

int main()
{
    int c, d, temp1;

    printf("Please enter the value of C : ");
    scanf("%d", &c);

    printf("Please enter the value of D : ");
    scanf("%d", &d);

    temp1 = c;

    c = d;
    d = temp1;

    printf("C = %d, D = %d\n\n", c, d);

    return 0;
}
