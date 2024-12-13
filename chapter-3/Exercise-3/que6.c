/*The mass of a single molecule of water is about 3.0x10-23 grams. A quart of water
is about 950 grams. Write a program that requests an amount of water, in quarts,
and displays the number of water molecules in that amount.*/
#include<stdio.h>
int main(void){

    // float H2O_mass = 3.0e-23;
    // float mass_h20_per_quarter = 950.0;
    // float qurter;
    // float num_mole;

    // printf("Enter the amout of water(in quarter): ");
    // scanf("%f\n", &qurter);
    // num_mole = qurter * mass_h20_per_quarter / H2O_mass;

    // printf("There are %f no. of molecules in %f quter of water.",num_mole,qurter);
    float H20_MASS = 3.0e-23;
	float GRAMS_H20_PER_QUART = 950.;
	float quarts;

	printf("Enter an amount of water (in quarts): ");
	scanf("%f", &quarts);
	printf("There are %f molecules in %f quarts of water.\n", quarts * GRAMS_H20_PER_QUART / H20_MASS, quarts);
    return 0;
}