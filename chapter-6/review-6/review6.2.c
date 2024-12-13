/*review6.2.c*/
#include<stdio.h>
int main(void)
{
    double value;
    for(value = 36; value > 0; value /= 21)
        printf("%3d", value);
}