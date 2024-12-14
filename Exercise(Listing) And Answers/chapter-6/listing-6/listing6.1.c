/*summing.c -- sums integers entered interactively*/
#include<stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit): ");
    //this while loop can be replaced by:
    // status = scanf("%ld", &num);
    // while (status == 1)     
    // {
    //     sum = sum + num;
    //     printf("Please enter next integer (q to quit): ");
    //     status = scanf("%ld", &num);
    // }
    while (scanf("%ld", &num) == 1) // work in 2 different ways:1st entered value of num
                                    // 2nd status of num (1 or 0)...
    {
         sum = sum + num;
        printf("Please enter next integer (q to quit): ");
    }
    
    printf("Those integers sum to %ld.\n", sum);

    return 0;
    
}