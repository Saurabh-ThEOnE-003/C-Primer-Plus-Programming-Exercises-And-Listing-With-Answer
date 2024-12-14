/*Write a program that requests lower and upper integer limits, calculates the sum
of all the integer squares from the square of the lower limit to the square of the
upper limit, and displays the answer. The program should then continue to
prompt for limits and display answers until the user enters an upper limit that is
equal to or less than the lower limit. A sample run should look something like
this:
Enter lower and upper integer limits: 5 9
The sums of the squares from 25 to 81 is 255
Enter next set of limits: 3 25
The sums of the squares from 9 to 625 is 5520
Enter next set of limits: 5 5
Done*/
#include<stdio.h>
int main(void)
{
    int upper, lower;
    int total_sum;
    int count;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&lower,&upper);
    while (lower < upper)
    {
        
        total_sum = 0;
        //In this for loop the square of every no. between lower and upper
        //get's added int total = total + (no. * no.);
        for(count = lower; count <= upper; count++)
             total_sum += count * count;
         printf("The sums of the squares form %d to %d is %d\n",lower*lower, upper*upper , total_sum);
         printf("Enter next set of limits:");
         scanf("%d %d", &lower,&upper);
    }
    printf("Done\n");
    return 0;
}