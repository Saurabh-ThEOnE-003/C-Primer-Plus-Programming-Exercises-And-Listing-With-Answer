/*Change the program addemup.c (Listing 5.13), which found the sum of the first
20 integers. (If you prefer, you can think of addemup.c as a program that
calculates how much money you get in 20 days if you receive $1 the first day, $2
the second day, $3 the third day, and so on.) Modify the program so that you can
tell it interactively how far the calculation should proceed. That is, replace the 20
with a variable that is read in.*/
#include<stdio.h>
int main(void)
{
    int count, dollar, days;
    count = 1;
    dollar = 0;
    printf("Enter the number of day's you work: \n");
    scanf("%d", &days);
    while (count < days)
    {
        //for 1st day $1, 2nd day ($1 + $2)$3, 3rd day $6....
        dollar = count + dollar;
        printf("On %d day, you get $%d.\n",count, dollar);
        count++;
    }
    printf("On %d day, you get $%d.\n",count, dollar + 1);
    return 0;
}