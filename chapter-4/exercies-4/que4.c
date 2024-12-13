/*Write a program that requests your height in inches and your name, and then
displays the information in the following form:
Dabney, you are 6.208 feet tall
Use type float, and use / for division. If you prefer, request the height in
centimeters and display it in meters.*/
#include<stdio.h>
int main(void)
{
    char name[40];
    float height;
    float feet;
    printf("What is your name: \n");
    scanf("%s", name);
    printf("What is your height(in inches): \n");
    scanf("%f", &height);
    feet = height / 12;
    printf("%s, you are %.2f feet tall.",name, feet);

    return 0;
}