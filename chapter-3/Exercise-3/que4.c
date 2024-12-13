/*Write a program that reads in a floating-point number and prints it first in
decimal-point notation and then in exponential notation. Have the output use the
following format (the actual number of digits displayed for the exponent depends
on the system):
The input is 21.290000 or 2.129000e+001.
*/
#include<stdio.h>
int main(void){
    float value = 21;

    printf("The input is %lf or %e", value, value);

    return 0;
}