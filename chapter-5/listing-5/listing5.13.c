/*addemup.c -- four kinds of statements*/
#include<stdio.h>
int main(void)
{
    int count, sum;
    sum = 0;
    count = 0;
    while (count < 20)
    {
        sum = count + sum;
        printf("sum = %d\n",sum);
        count++;
    }
     return 0;
}