/*There are approximately 3.156 x 107 seconds in a year. Write a program that
requests your age in years and then displays the equivalent number of seconds.
*/

#include<stdio.h>
int main(void){
    int year;
    float insec;

    printf("Enter your age: ");
    scanf("%d", &year);

    insec = year * 12 * 3.15 * 107;
    printf("Your age in seconds is %f", insec);

    return 0;

}