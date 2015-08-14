#include<stdio.h>

int main()
{

    int angle1, angle2, angle3, sum;

    printf ("Enter three angles of triangle: ");

    scanf("%d%d%d", &angle1, &angle2, &angle3);

    sum = (angle1+angle2+angle3);

    if(sum == 180) {
        printf("\nTriangle is valid\n\n");
    }
    else {
        printf("Triangle is invalid\n\n");
    }

    return 0;
}
