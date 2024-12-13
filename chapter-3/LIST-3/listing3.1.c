#include<stdio.h>
int main(void){
    float weight;
    float value;
    
    printf("Are you worth your weight in rhodium.\n");
    printf("Let's check it out.\n");
    printf("Enter you weight in pounds: ");
    scanf("%f", &weight);
    /*rhodium is $770 per ounce 
    14.5833 converts pounds avd. to ounce troy */
    value = 770.0 * weight * 14.5833;
    printf("Your weight in rhodium is $%.2f.\n",value);
    printf("Your are easily worth that! If rhodium price drop.\n");
    printf("Eat more to maintain your value.\n");
    printf("Gramps sez, \"a \\ is a backslash.\"\n");

    return 0;
}