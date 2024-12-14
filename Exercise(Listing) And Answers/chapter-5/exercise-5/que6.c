/*Now modify the program of Programming Exercise 5 so that it computes the sum
of the squares of the integers. (If you prefer, how much money you receive if you
get $1 the first day, $4 the second day, $9 the third day, and so on. This looks
like a much better deal!) C doesn't have a squaring function, but you can use the
fact that the square of n is n * n*/
#include<stdio.h>
int main(void)
{
    int count, days, dollar;
    count = 1;
    dollar = 0;
    printf("Enter the number of day's you work: \n");
    scanf("%d", &days);
    while (count < days)
    {
        //for 1st day $1, 2nd day (2*2)$4, 3rd day (3*3)$9
        dollar = (count * count);
        printf("On %d day, you get $%d.\n",count, dollar);
        count++;
    }
    printf("On %d day, you get $%d.\n",count, count * count);
    return 0;
    
}