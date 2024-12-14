/*Write a program that sets a type double variable to 1.0/3.0 and a type float
variable to 1.0/3.0. Display each result three times—once showing four digits to
the right of the decimal, once showing 12 digits to the right of the decimal, and
once showing 16 digits to the right of the decimal. Also have the program include
float.h and display the values of FLT_DIG and DBL_DIG. Are the displayed values
of 1.0/3.0 consistent with these values?
*/
#include<stdio.h>
#include<float.h>

int main(void)
{
    float a = 1.0/3.0;
    double b = 1.0/3.0;

    printf("4 digit decimal: float = %.4f & double = %.4f\n", a, b);
    printf("12 digit decimal: float = %.12f & double = %.12f\n", a, b);
    printf("16 digit decimal: float = %.16f & double = %.12f\n", a, b);
    printf("float precision: %d & Double precisio %f.",FLT_DIG, DBL_DIG);
    return 0;

}