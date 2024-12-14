/*Write a program that requests two floating-point numbers and prints the value of
their difference divided by their product. Have the program loop through pairs of
input values until the user enters nonnumeric input.*/
#include<stdio.h>
int main(void)
{
    float upper,lower;
    float diff, product;
    int count;
    printf("Enter two floating-point number:");
    while (scanf("%f %f", &upper, &lower) == 2)
    {
        product = upper * lower;
        diff = (upper - lower)/product;
        printf("Differen divided by product is: %f\n", diff);
        printf("Enter two floating-point number:");
    }
    printf("Exiting--->>");

    return 0;
}