#include <stdio.h>

float cgpa_grading(float);

// main function
int main()
{
    /*
    * variable initialization
    * variable data type float
    */
    float english, eng_credit, calculas2, calculas2_credit, programming, programming_credit, programing_lab, programing_lab_credit, physics, physics_credit, total_marks, total_credits, cgpa;

    // display a message in console
    printf("Please enter the values sequentially!\n\n");

    // cursor wait for your english GP
    printf("Please input your functional english GP : ");
    // store the value into english variable
    scanf("%f", &english);

    // cursor wait for your english GP
    printf("Please input your functional english credit : ");
    scanf("%f", &eng_credit);

    // cursor wait for your calculas 2 GP
    printf("Please input your calculas ii GP : ");
     // store the value into calculas2 variable
    scanf("%f", &calculas2);

    // cursor wait for your calculas 2 credit
    printf("Please input your calculas ii credit : ");
     // store the value into calculas2_credit variable
    scanf("%f", &calculas2_credit);

    // cursor wait for your programming GP
    printf("Please input your programming GP : ");
     // store the value into programming variable
    scanf("%f", &programming);

    // cursor wait for your programming credit
    printf("Please input your programming credit : ");
     // store the value into programming_credit variable
    scanf("%f", &programming_credit);

    // cursor wait for your programing lab GP
    printf("Please input your programming lab GP : ");
     // store the value into programing_lab variable
    scanf("%f", &programing_lab);

    // cursor wait for your programing lab credit
    printf("Please input your programing lab credit : ");
     // store the value into programing_lab_credit variable
    scanf("%f", &programing_lab_credit);

    // cursor wait for your physics GP
    printf("Please input your physics GP : ");
     // store the value into physics variable
    scanf("%f", &physics);

    // cursor wait for your physics credit
    printf("Please input your physics credit : ");
     // store the value into physics_credit variable
    scanf("%f", &physics_credit);

    // summation of total GP, Multiply with credit
    total_marks = (english*eng_credit)+(calculas2*calculas2_credit)+(programming*programming_credit)+(programing_lab*programing_lab_credit)+(physics*physics_credit);
    // total credit
    total_credits = eng_credit+calculas2_credit+programming_credit+programing_lab_credit+physics_credit;
    // final CGPA
    cgpa = total_marks/total_credits;

    // print the final cgpa
    printf("\n\nYour CGPA is : %.2f \n\n", cgpa);

    cgpa_grading(cgpa);

    return 0;
}


float cgpa_grading(float cgpa)
{
    if(cgpa >= 4.00){
        printf("You have earn A+\n");
    }
    else if(cgpa >= 3.75 && cgpa < 4.00){
        printf("You have earn A\n");
    }
    else if(cgpa >= 3.50 && cgpa < 3.75){
        printf("You have earn A-\n");
    }
    else if(cgpa >= 3.25 && cgpa < 3.50){
        printf("You have earn B+\n");
    }
    else if(cgpa >= 3.00 && cgpa < 3.25){
        printf("You have earn B\n");
    }
    else if(cgpa >= 2.75 && cgpa < 3.00){
        printf("You have earn B-\n");
    }
    else if(cgpa >= 2.50 && cgpa < 2.75){
        printf("You have earn C+\n");
    }
    else if(cgpa >= 2.25 && cgpa < 2.50){
        printf("You have earn C\n");
    }
    else if(cgpa >= 2.00 && cgpa < 2.25){
        printf("You have earn C-\n");
    }
    else if(cgpa >= 1.75 && cgpa < 2.00){
        printf("You have earn D+\n");
    }
    else if(cgpa >= 1.50 && cgpa < 1.75){
        printf("You have earn D-\n");
    }
    else if(cgpa >= 1.25 && cgpa < 1.50){
        printf("You have earn A+\n");
    }
    else if(cgpa >= 1.00 && cgpa < 1.25){
        printf("Sorry, you have failed!\n");
    }
}





