/*There are 2.54 centimeters to the inch. Write a program that asks you to enter
your height in inches and then displays your height in centimeters. Or, if you
prefer, ask for the height in centimeters and convert that to inches.
*/
#include<stdio.h>
int main(void){
    
    int cm;
    double inch;
    printf("Enter your height(in cm): ");
    scanf("%d\n", &cm);
    inch = cm * 0.3937;
    printf("Your height in cm is %2.f inch",inch);

    return 0;
}