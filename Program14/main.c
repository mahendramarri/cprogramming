#include<stdio.h>
main()
{
    float f,c;
    printf("\nEnter temperature in Fahrenheit : ");
    scanf("%f",&f);

    c=(f-32)*5/9;  //Formula to convert Fahrenheit in Celsius

    printf("\nTemprature in Celsius : %f\n\n",c);

    return 0;
}
