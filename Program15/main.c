#include <stdio.h>

int main () {
    int a, b, c, temp1, temp2, temp3;

    printf("Value of a : ");
    scanf("%d",&a);

    printf("Value of b : ");
    scanf("%d",&b);

    printf("Value of c : ");
    scanf("%d",&c);

    // swapping
    temp1 = a;
    temp2 = b;
    temp3 = c;
    a = temp2;
    b = temp3;
    c = temp1;

    printf("\nValue of a after rotation : %d", a);
    printf("\nValue of b after rotation : %d", b);
    printf("\nValue of c after rotation : %d\n", c);

    return 0;
}
