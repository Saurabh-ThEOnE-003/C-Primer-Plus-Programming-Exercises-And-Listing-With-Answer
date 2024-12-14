/*Write a program that converts time in minutes to time in hours and minutes. Use
#define or const to create a symbolic constant for 60. Use a while loop to allow
the user to enter values repeatedly and terminate the loop if a value for the time
of 0 or less is entered.
*/
#include<stdio.h>
const int  M_TO_H = 60;
int main(void)
{
    int min = 0;
    printf("Please enter Time (first min)(=> 0 to exit )\n");
    printf("Minutes: \n");
    scanf("%d", &min);
    while (min > 0)
    {
    printf("You have %d minutes = %d hours %d minutes!\n",min, (int)min / M_TO_H, (int)min % M_TO_H);
    printf("Please enter Time (first min)(=> 0 to exit )\n");
    scanf("%d", &min);
    }
    printf("Exiting----->>>");
    
}