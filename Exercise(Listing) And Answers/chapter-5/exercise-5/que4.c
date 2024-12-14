/*Write a program that asks the user to enter a height in centimeters and then
displays the height in centimeters and in feet and inches. Fractional centimeters
and inches should be allowed, and the program should allow the user to continue
entering heights until a nonpositive value is entered. A sample run should look
like this:
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit): 168
168.0 cm = 5 feet, 6.1 inches
Enter*/
#include<stdio.h>
const float I_TO_CM = 2.54;
const float f_to_I = 12.00;
int main(void)
{
    int feet;
    float cm, inch;
    printf("Enter a height in centimeters: ");
    scanf("%f", &cm);
    while (cm > 0)
    {
        inch = cm / I_TO_CM;
        feet = inch / f_to_I;
        cm = (int)cm;
        printf("%.1f cm = %d feet, %.1f inches\n",cm, feet, inch - feet * f_to_I);
        printf("Enter a height in centimeters: ");
        scanf("%f", &cm);
    }
    
    printf("Exiting-->>");
    return 0;

}