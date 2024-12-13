/*Write a program that asks the user to enter the number of miles traveled and the
number of gallons of gasoline consumed. It should then calculate and display 
the miles-per-gallon value, showing one place to the right of the decimal. Next, using
the fact that one gallon is about 3.785 liters and one mile is about 1.609
kilometers, it should convert the mile-per-gallon value to a liters-per-100-km
value, the usual European way of expressing fuel consumption, and display the
result, showing one place to the right of the decimal. (Note that the U.S. scheme
measures the amount of fuel per distance, whereas the European scheme
measures the distance per amount of fuel.) Use symbolic constants (using const
or #define) for the two conversion factors.*/
#include<stdio.h>
#define LITER_PER_MILES 3.785
#define KIL0_PER_MILES 1.607

int main(void)
{
    float gallons;
    float miles;
    float km,liter;

    printf("How much did you travels: \n");
    scanf("%f", &miles);
    printf("For %.2f miles, how much fule is consumed: \n",miles);
    scanf("%f", &gallons);
    //miles-per-gallons
    //liters-per-km
    printf("You travelled %.2f liters / %.2f km.\n",(gallons * LITER_PER_MILES),(miles * KIL0_PER_MILES));
    km = miles * KIL0_PER_MILES;
    liter = gallons * LITER_PER_MILES;
   //liters-per-100km
    printf("Fuel consumption is %.1f liters per 100km.\n", (100 * liter) / km);
    return 0;
}