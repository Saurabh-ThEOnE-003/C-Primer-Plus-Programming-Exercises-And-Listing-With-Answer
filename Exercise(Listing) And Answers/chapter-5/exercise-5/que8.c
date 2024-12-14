/*Write a program that requests the user to enter a Fahrenheit temperature. The
program should read the temperature as a type double number and pass it as an
argument to a user-supplied function called Temperatures(). This function should
calculate the Celsius equivalent and the Kelvin equivalent and display all three
temperatures with a precision of two places to the right of the decimal. It should
identify each value with the temperature scale it represents. Here is the formula
for converting Fahrenheit to Celsius: Celsius = 1.8 * Fahrenheit + 32.0
The Kelvin scale, commonly used in science, is a scale in which 0 represents
absolute zero, the lower limit to possible temperatures. Here is the formula for
converting Celsius to Kelvin:
Kelvin = Celsius + 273.16
The Temperatures() function should use const to create symbolic
representations of the three constants that appear in the conversions. The main()
function should use a loop to allow the user to enter temperatures repeatedly,
stopping when a q or other nonnumeric value is entered.*/
#include<stdio.h>
void tempe(void);
int main(void)
{
    double farah;
    int status;
    double celc, kelv;
    printf("Enter the Temperature(in Fahreneit)\n");
    printf("(q for quit):\n");
    // scanf("%lf", &fara);
    while (scanf("%lf", &farah) == 1)
    {
        tempe();
    }
    printf("Exiting-->>");
    
    return 0;
}
void tempe(void)
{
    double fara;
    double celc, kelv;
    
    // printf("Enter the Temperature(in Fahreneit):\n");
    // printf("(q for quit):\n");
    // scanf("%lf", &fara);
    celc = (fara - 32) * 5/9;
    kelv = celc + 273.15;
    printf("Temperatur : Fahrenheit = %.2lf F, Celcius = %.2lf C, Kelvin = %.2lf K\n", fara, celc, kelv);
}
