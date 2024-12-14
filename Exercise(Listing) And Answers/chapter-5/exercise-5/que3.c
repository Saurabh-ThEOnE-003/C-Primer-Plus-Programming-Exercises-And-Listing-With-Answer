/*Write a program that asks the user to enter the number of days and then
converts that value to weeks and days. For example, it would convert 18 days to
2 weeks, 4 days. Display results in the following format:
18 days are 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the
loop when the user enters a nonpositive value, such as 0 or -20.
*/
#include<stdio.h>
const int W_TO_D = 7;
int main(void)
{
    int day = 0;
    printf("Please enter Day's here: \n");
    scanf("%d", &day);
    while (day > 0)
    {
        printf("%d days are %d weeks, %d days.\n",day, day / W_TO_D, day % W_TO_D);
        printf("Please enter Day's here: \n");
        scanf("%d", &day);
    }
    
    printf("Exiting--->>>");

    return 0;
    
}