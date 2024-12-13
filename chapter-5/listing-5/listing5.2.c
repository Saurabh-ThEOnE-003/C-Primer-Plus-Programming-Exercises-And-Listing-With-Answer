/*shoes2.c -- calculates foot lengts for several sizes*/
#include<stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;

    printf("Shoe size (men's)     foot length\n");
    //while loop start
    shoe = 3.0;
    while (shoe < 18.5)   // starting the while loop
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.1f inches\n", shoe, foot);
        shoe = shoe + 1;

    }//  end of block
    printf("If the shoe fits, wear it.\n");

    return 0;    
}